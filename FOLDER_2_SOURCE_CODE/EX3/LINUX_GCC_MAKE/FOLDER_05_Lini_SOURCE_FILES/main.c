/*********************/
/* FILE NAME: main.c */
/*********************/

/*************************/
/* GENERAL INCLUDE FILES */
/*************************/
#include <stdio.h>
#include <stdlib.h>

/*************************/
/* PROJECT INCLUDE FILES */
/*************************/
#include "FILE_01_util.h"
#include "FILE_08_MatReader_API.h"
#include "FILE_13_RowOperations_API.h"
#include "FILE_18_SolutionSet_API.h"

/********/
/* main */
/********/
int main(int argc,char **argv)
{
	/***********************/
	/* [0] Initializations */
	/***********************/
	string Matrix_Filename       =argv[1];
	string RowOperations_Filename=argv[2];
	string SolutionSet_Filename  =argv[3];
	string CheckSummary_Filename =argv[4];

	/**************************/
	/* [1] Parse Input Matrix */
	/**************************/

	/****************************/
	/* [2] Parse Row Operations */
	/****************************/

	/**************************/
	/* [3] Parse Solution Set */
	/**************************/

	/********************************************/
	/* [4] Apply Row Operations On Input Matrix */
	/********************************************/

	/******************************************/
	/* [5] Check Solution Set Of Input Matrix */
	/******************************************/

	/***************************/
	/* [6] Write Check Summary */
	/***************************/
}

