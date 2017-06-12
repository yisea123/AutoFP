/*****************************************************************************
 * HMetrologyModel.h
 ***************************************************************************** 
 *
 * Project:     HALCON/C++
 * Description: Class HMetrologyModel
 *
 * (c) 1996-2012 by MVTec Software GmbH
 *                  www.mvtec.com
 * 
 *****************************************************************************
 *
 * $Revision: 1.3 $
 * $Date: 2012/04/27 13:16:34 $
 *
 */

#ifndef H_METROLOGY_MODEL_H
#define H_METROLOGY_MODEL_H


#include "HCPPToolRef.h"


namespace Halcon {


class LIntExport HMetrologyModel: public HToolBase 
{
public:

  // Tool-specific functional class constructors


  // Common tool class management functionality

  HMetrologyModel();
  HMetrologyModel(Hlong ID);
  const char *ClassName(void) const;
  void  SetHandle(Hlong ID);

  // Tool-specific member functions

  // Deserialize a serialized metrology model.
  virtual void DeserializeMetrologyModel(const Halcon::HSerializedItem &SerializedItemHandle);
  // Serialize a metrology model.
  virtual HSerializedItem SerializeMetrologyModel() const;
  // Transform of metrology objects of a metrology model, e.g. for alignment.
  virtual void TransformMetrologyObject(const Halcon::HTuple &Indices, const Halcon::HTuple &Row, const Halcon::HTuple &Column, const Halcon::HTuple &Phi, const Halcon::HTuple &Mode) const;
  // Write a metrology model to a file.
  virtual void WriteMetrologyModel(const Halcon::HTuple &FileName) const;
  // Write a metrology model to a file.
  virtual void WriteMetrologyModel(const char *FileName) const;
  // Read a metrology model from a file.
  virtual void ReadMetrologyModel(const Halcon::HTuple &FileName);
  // Read a metrology model from a file.
  virtual void ReadMetrologyModel(const char *FileName);
  // Copy a metrology model.
  virtual Hlong CopyMetrologyModel(const Halcon::HTuple &Indices) const;
  // Copy metrology metrology objects of a metrology model.
  virtual HTuple CopyMetrologyObject(const Halcon::HTuple &Indices) const;
  // Get the number of instances of the metrology objects of a metrology model.
  virtual HTuple GetMetrologyObjectNumInstances(const Halcon::HTuple &Indices) const;
  // Get the number of instances of the metrology objects of a metrology model.
  virtual HTuple GetMetrologyObjectNumInstances(Hlong Indices) const;
  // Get the results of the measurements applied for a metrology model.
  virtual HTuple GetMetrologyObjectResult(const Halcon::HTuple &Indices, const Halcon::HTuple &Instance, const Halcon::HTuple &GenParamName, const Halcon::HTuple &GenParamValue) const;
  // Get the measure regions and the results of the edge location for the
  // metrology objects of a metrology model.
  virtual HXLDContArray GetMetrologyObjectMeasures(const Halcon::HTuple &Indices, const Halcon::HTuple &Transition, Halcon::HTuple *Row, Halcon::HTuple *Column) const;
  // Measure and fit the geometric shapes of all metrology objects of
  // a metrology model.
  virtual void ApplyMetrologyModel(const HImage &Image) const;
  // Get the indices of the metrology objects of a metrology model.
  virtual HTuple GetMetrologyObjectIndices() const;
  // Reset all fuzzy parameters and fuzzy functions of a metrology
  // model.
  virtual void ResetMetrologyObjectFuzzyParam(const Halcon::HTuple &Indices) const;
  // Reset all parameters of a metrology model.
  virtual void ResetMetrologyObjectParam(const Halcon::HTuple &Indices) const;
  // Get a fuzzy parameter of a metroloy model.
  virtual HTuple GetMetrologyObjectFuzzyParam(const Halcon::HTuple &Indices, const Halcon::HTuple &GenParamName) const;
  // Get one or several parameters of a metroloy model.
  virtual HTuple GetMetrologyObjectParam(const Halcon::HTuple &Indices, const Halcon::HTuple &GenParamName) const;
  // Set fuzzy parameters or fuzzy functions for a metrology model.
  virtual void SetMetrologyObjectFuzzyParam(const Halcon::HTuple &Indices, const Halcon::HTuple &GenParamName, const Halcon::HTuple &GenParamValue) const;
  // Set parameters for the metrology objects of a metrology model.
  virtual void SetMetrologyObjectParam(const Halcon::HTuple &Indices, const Halcon::HTuple &GenParamName, const Halcon::HTuple &GenParamValue) const;
  // Add a rectangle to a metrology model.
  virtual Hlong AddMetrologyObjectRectangle2Measure(const Halcon::HTuple &Row, const Halcon::HTuple &Column, const Halcon::HTuple &Phi, const Halcon::HTuple &Length1, const Halcon::HTuple &Length2, const Halcon::HTuple &MeasureLength1, const Halcon::HTuple &MeasureLength2, const Halcon::HTuple &MeasureSigma, const Halcon::HTuple &MeasureThreshold, const Halcon::HTuple &GenParamName, const Halcon::HTuple &GenParamValue) const;
  // Add a rectangle to a metrology model.
  virtual Hlong AddMetrologyObjectRectangle2Measure(double Row, double Column, double Phi, double Length1, double Length2, double MeasureLength1, double MeasureLength2, double MeasureSigma, double MeasureThreshold, const char *GenParamName, double GenParamValue) const;
  // Add a line to a metrology model.
  virtual Hlong AddMetrologyObjectLineMeasure(const Halcon::HTuple &RowBegin, const Halcon::HTuple &ColumnBegin, const Halcon::HTuple &RowEnd, const Halcon::HTuple &ColumnEnd, const Halcon::HTuple &MeasureLength1, const Halcon::HTuple &MeasureLength2, const Halcon::HTuple &MeasureSigma, const Halcon::HTuple &MeasureThreshold, const Halcon::HTuple &GenParamName, const Halcon::HTuple &GenParamValue) const;
  // Add a line to a metrology model.
  virtual Hlong AddMetrologyObjectLineMeasure(double RowBegin, double ColumnBegin, double RowEnd, double ColumnEnd, double MeasureLength1, double MeasureLength2, double MeasureSigma, double MeasureThreshold, const char *GenParamName, double GenParamValue) const;
  // Add an ellipse or an elliptic arc to a metrology model.
  virtual Hlong AddMetrologyObjectEllipseMeasure(const Halcon::HTuple &Row, const Halcon::HTuple &Column, const Halcon::HTuple &Phi, const Halcon::HTuple &Radius1, const Halcon::HTuple &Radius2, const Halcon::HTuple &MeasureLength1, const Halcon::HTuple &MeasureLength2, const Halcon::HTuple &MeasureSigma, const Halcon::HTuple &MeasureThreshold, const Halcon::HTuple &GenParamName, const Halcon::HTuple &GenParamValue) const;
  // Add an ellipse or an elliptic arc to a metrology model.
  virtual Hlong AddMetrologyObjectEllipseMeasure(double Row, double Column, double Phi, double Radius1, double Radius2, double MeasureLength1, double MeasureLength2, double MeasureSigma, double MeasureThreshold, const char *GenParamName, double GenParamValue) const;
  // Add a circle or a circular arc to a metrology model.
  virtual Hlong AddMetrologyObjectCircleMeasure(const Halcon::HTuple &Row, const Halcon::HTuple &Column, const Halcon::HTuple &Radius, const Halcon::HTuple &MeasureLength1, const Halcon::HTuple &MeasureLength2, const Halcon::HTuple &MeasureSigma, const Halcon::HTuple &MeasureThreshold, const Halcon::HTuple &GenParamName, const Halcon::HTuple &GenParamValue) const;
  // Add a circle or a circular arc to a metrology model.
  virtual Hlong AddMetrologyObjectCircleMeasure(double Row, double Column, double Radius, double MeasureLength1, double MeasureLength2, double MeasureSigma, double MeasureThreshold, const char *GenParamName, double GenParamValue) const;
  // Delete all metrology models and free the allocated memory.
  static void ClearAllMetrologyModels(void);
  // Delete metrology objects and free the allocated memory.
  virtual void ClearMetrologyObject(const Halcon::HTuple &Indices) const;
  // Set the size of the image of metrology objects.
  virtual void SetMetrologyModelImageSize(const Halcon::HTuple &Width, const Halcon::HTuple &Height) const;
  // Set the size of the image of metrology objects.
  virtual void SetMetrologyModelImageSize(Hlong Width, Hlong Height) const;
  // Create the data structure that is needed to measure geometric shapes.
  virtual void CreateMetrologyModel(void);
};

}

#endif