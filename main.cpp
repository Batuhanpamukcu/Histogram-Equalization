/**************************************
 The original copy of the code can be found at http://web.eecs.utk.edu/~mkarakay/courses_files/testfiles.zip 
 and it is modified for ELM463/667
 **************************************/

#include "Image.h"

using namespace std;

int main(int argc, char **argv)
{
	
	// ADIM-1
	
	/*
	* For Fig0316(1) - HistogramEqualization
	*/
	
    Image InputFig0316_1;    // Create new object of Image type for input image
    Image OutputFig0316_1;     // Create new object of Image type for output image
    
    char InputFig0316_1_FileName[] = "Fig0316(1).pgm";    // File Name for input image
    char OutputFig0316_1_FileName[] = "Output_Fig0316(1).pgm";   // File Name for output image
    
    InputFig0316_1.readImage(InputFig0316_1_FileName);    // Read the Image
    OutputFig0316_1 = InputFig0316_1.HistogramEqualization();    // Run the HistogramEqualization for created input object and equalize to output object
    OutputFig0316_1.writeImage(OutputFig0316_1_FileName);    // Write the image
    
    /*
	* For Fig0316(2) - HistogramEqualization
	*/
	
    Image InputFig0316_2;    // Create new object of Image type for input image
    Image OutputFig0316_2;     // Create new object of Image type for output image
    
    char InputFig0316_2_FileName[] = "Fig0316(2).pgm";    // File Name for input image
    char OutputFig0316_2_FileName[] = "OutputFig0316(2).pgm";   // File Name for output image
    
    InputFig0316_2.readImage(InputFig0316_2_FileName);    // Read the Image
    OutputFig0316_2 = InputFig0316_2.HistogramEqualization();    // Run the HistogramEqualization for created input object and equalize to output object
    OutputFig0316_2.writeImage(OutputFig0316_2_FileName);    // Write the image
    
    /*
	* For Fig0316(3) - HistogramEqualization
	*/
	
    Image InputFig0316_3;    // Create new object of Image type for input image
    Image OutputFig0316_3;     // Create new object of Image type for output image
    
    char InputFig0316_3_FileName[] = "Fig0316(3).pgm";    // File Name for input image
    char OutputFig0316_3_FileName[] = "OutputFig0316(3).pgm";   // File Name for output image
    
    InputFig0316_3.readImage(InputFig0316_3_FileName);    // Read the Image
    OutputFig0316_3 = InputFig0316_3.HistogramEqualization();    // Run the HistogramEqualization for created input object and equalize to output object
    OutputFig0316_3.writeImage(OutputFig0316_3_FileName);    // Write the image
    
    /*
	* For Fig0316(4) - HistogramEqualization
	*/
	
    Image InputFig0316_4;    // Create new object of Image type for input image
    Image OutputFig0316_4;     // Create new object of Image type for output image
    
    char InputFig0316_4_FileName[] = "Fig0316(4).pgm";    // File Name for input image
    char OutputFig0316_4_FileName[] = "OutputFig0316(4).pgm";   // File Name for output image
    
    InputFig0316_4.readImage(InputFig0316_4_FileName);    // Read the Image
    OutputFig0316_4 = InputFig0316_4.HistogramEqualization();    // Run the HistogramEqualization for created input object and equalize to output object
    OutputFig0316_4.writeImage(OutputFig0316_4_FileName);    // Write the image
    
    // ADIM-2
    
    /*
	* For MyFigure - Brighten a photo and make the histogram
	*/
	
    Image InputMyFigure;    // Create new object of Image type for input image
    Image OutputMyFigure;     // Create new object of Image type for output image
    
    char InputMyFigure_FileName[] = "MyFigure.pgm";    // File Name for input image
    char BrightMyFigure_FileName[] = "BrightMyFigure.pgm";   // File Name for output image
    char OutputMyFigure_FileName[] = "OutputMyFigure.pgm";   // File Name for output image
    
    InputMyFigure.readImage(InputMyFigure_FileName);    // Read the Image
    OutputMyFigure = InputMyFigure.GammaTransformationFunction(0.5);   // Run the GammaTransformationFunction for increasing bright
    OutputMyFigure.writeImage(BrightMyFigure_FileName);    // Write the bright image
	OutputMyFigure = OutputMyFigure.HistogramEqualization();    // Run the HistogramEqualization for output object
    OutputMyFigure.writeImage(OutputMyFigure_FileName);    // Write the image
    
    /*
	* For MyFigure - Darken a photo and make the histogram
	*/
	
    Image InputMyFigure_1;    // Create new object of Image type for input image
    Image OutputMyFigure_1;     // Create new object of Image type for output image
    
    char InputMyFigure_1_FileName[] = "MyFigure.pgm";    // File Name for input image
    char DarkMyFigure_FileName[] = "DarkMyFigure.pgm";   // File Name for output image
    char OutputMyFigure_1_FileName[] = "OutputMyFigure_1.pgm";   // File Name for output image
    
    InputMyFigure_1.readImage(InputMyFigure_1_FileName);    // Read the Image
    OutputMyFigure_1 = InputMyFigure_1.GammaTransformationFunction(2);    // Run the GammaTransformationFunction for increasing dark
    OutputMyFigure_1.writeImage(DarkMyFigure_FileName);    // Write the dark image
    OutputMyFigure_1 = OutputMyFigure_1.HistogramEqualization();    // Run the HistogramEqualization for output object
    OutputMyFigure_1.writeImage(OutputMyFigure_1_FileName);    // Write the image
    
    /*
	* For MyFigure - Decrease contrast and make the histogram
	*/
	
    Image InputMyFigure_2;    // Create new object of Image type for input image
    Image OutputMyFigure_2;     // Create new object of Image type for output image
    
    char InputMyFigure_2_FileName[] = "MyFigure.pgm";    // File Name for input image
    char ContrastMyFigure_FileName[] = "ContrastMyFigure.pgm";   // File Name for output image
    char OutputMyFigure_2_FileName[] = "OutputMyFigure_2.pgm";   // File Name for output image
    
    InputMyFigure_2.readImage(InputMyFigure_2_FileName);    // Read the Image
    OutputMyFigure_2 = InputMyFigure_2.LogTransformationFunction();    // Run the LogTransformationFunction for increasing dark
    OutputMyFigure_2.writeImage(ContrastMyFigure_FileName);    // Write the contrast image
    OutputMyFigure_2 = OutputMyFigure_2.HistogramEqualization();    // Run the HistogramEqualization for output object
    OutputMyFigure_2.writeImage(OutputMyFigure_2_FileName);    // Write the image
}
