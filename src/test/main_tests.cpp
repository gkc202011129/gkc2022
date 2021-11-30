// Copyright (c) 2014 The Bitcoin Core developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "primitives/transaction.h"
#include "main.h"
#include "../forkheights.h"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(main_tests)

CAmount nMoneySupplyPoWEnd = 43199500 * COIN;

BOOST_AUTO_TEST_CASE(subsidy_limit_test)
{
}

BOOST_AUTO_TEST_CASE(TestGetAdPrice)
{
	const BlockHeight forkheight = forkheight_release_v_2_6_0;
	CAmount price = 0;

	price = advertisement::GetAdPrice(forkheight-1);
	BOOST_CHECK_EQUAL(price,5*COIN);

	price = advertisement::GetAdPrice(forkheight);
	BOOST_CHECK_EQUAL(price,50*COIN);
}

BOOST_AUTO_TEST_CASE(Test_EnableBanAddress)
{
	BOOST_CHECK_EQUAL(EnableBanAddress(),false);
}

BOOST_AUTO_TEST_CASE(Test_InitBanAddressMap)
{
	std::vector<string> banAddressVec = {"GPMqQN8VaAmk5mDEhUaTsYX2EP3qKX8JGy:101","GHr1Can8vzLVFVNo4VjW4eRN13Yzfe7tPh:1234567890"};
	BOOST_CHECK_EQUAL(EnableBanAddress(),false);
	InitBanAddressMap(banAddressVec);
	BOOST_CHECK_EQUAL(EnableBanAddress(),true);
}

BOOST_AUTO_TEST_CASE(Test_IsAddressBanned)
{
	std::vector<string> banAddressVec = {"GPMqQN8VaAmk5mDEhUaTsYX2EP3qKX8JGy:101","GHr1Can8vzLVFVNo4VjW4eRN13Yzfe7tPh:1234567890"};
	InitBanAddressMap(banAddressVec);
	BOOST_CHECK_EQUAL(IsAddressBanned(CBitcoinAddress("GPMqQN8VaAmk5mDEhUaTsYX2EP3qKX8JGy"),100),false);
	BOOST_CHECK_EQUAL(IsAddressBanned(CBitcoinAddress("GPMqQN8VaAmk5mDEhUaTsYX2EP3qKX8JGy"),101),true);
	BOOST_CHECK_EQUAL(IsAddressBanned(CBitcoinAddress("GHr1Can8vzLVFVNo4VjW4eRN13Yzfe7tPh"),1234567889),false);
	BOOST_CHECK_EQUAL(IsAddressBanned(CBitcoinAddress("GHr1Can8vzLVFVNo4VjW4eRN13Yzfe7tPh"),1234567890),true);
}

BOOST_AUTO_TEST_CASE(Test_HasAddressBanned)
{
	std::vector<string> banAddressVec = {"GPMqQN8VaAmk5mDEhUaTsYX2EP3qKX8JGy:101"};
	std::vector<CBitcoinAddress> addrs = {CBitcoinAddress("GPMqQN8VaAmk5mDEhUaTsYX2EP3qKX8JGy")};
	InitBanAddressMap(banAddressVec);
	BOOST_CHECK_EQUAL(HasAddressBanned(addrs,100),false);
	BOOST_CHECK_EQUAL(HasAddressBanned(addrs,101),true);
}

BOOST_AUTO_TEST_CASE(Test_AddBanAddress)
{
	AddBanAddress(CBitcoinAddress("GPMqQN8VaAmk5mDEhUaTsYX2EP3qKX8JGy"),101);
	BOOST_CHECK_EQUAL(IsAddressBanned(CBitcoinAddress("GPMqQN8VaAmk5mDEhUaTsYX2EP3qKX8JGy"),101),true);
}

BOOST_AUTO_TEST_SUITE_END()
