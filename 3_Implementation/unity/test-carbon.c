s	#include "unity.h"
	#include "unity-internals.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_elbill(void)
	{
  		TEST_ASSERT_EQUAL(510, sum(50));
  		TEST_ASSERT_EQUAL(816), sum(80));
	}

    	void test_ptbill(void)
	{
  		TEST_ASSERT_EQUAL(689, sum(25));
  		TEST_ASSERT_EQUAL(1102, sum(40));
	}

    	void test_lgbill(void)
	{
  		TEST_ASSERT_EQUAL(2088, sum(50));
  		TEST_ASSERT_EQUAL(3341, sum(80));
	}

    	void test_mlbill(void)
	{
  		TEST_ASSERT_EQUAL(190, sum(20));
  		TEST_ASSERT_EQUAL(237, sum(25));
	}

    void test_flihrs(void)
	{
  		TEST_ASSERT_EQUAL(22, sum(2));
  		TEST_ASSERT_EQUAL(440, sum(10));
	}

    void test_plnplt(void)
	{
  		TEST_ASSERT_EQUAL(10, sum(5));
  		TEST_ASSERT_EQUAL(40, sum(20));
	}    

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_elbill);
        RUN_TEST(test_ptbill);
        RUN_TEST(test_lgbill);
        RUN_TEST(test_mlbill);
        RUN_TEST(test_flihrs);
        RUN_TEST(test_plnplt);

  		return UNITY_END();
	}