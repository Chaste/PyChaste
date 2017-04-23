// This file has been generated by Py++.


/*

Copyright (c) 2005-2017, University of Oxford.
All rights reserved.

University of Oxford means the Chancellor, Masters and Scholars of the
University of Oxford, having an administrative office at Wellington
Square, Oxford OX1 2JD, UK.

This file is part of Chaste.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "boost/python.hpp"
#include "wrapper_header_collection.hpp"
#include "NagaiHondaForce2.pypp.hpp"

namespace bp = boost::python;

struct NagaiHondaForce_less__2__greater__wrapper : NagaiHondaForce< 2 >, bp::wrapper< NagaiHondaForce< 2 > > {

    NagaiHondaForce_less__2__greater__wrapper(NagaiHondaForce<2> const & arg )
    : NagaiHondaForce<2>( arg )
      , bp::wrapper< NagaiHondaForce< 2 > >(){
        // copy constructor
        
    }

    NagaiHondaForce_less__2__greater__wrapper( )
    : NagaiHondaForce<2>( )
      , bp::wrapper< NagaiHondaForce< 2 > >(){
        // null constructor
    
    }

    virtual void AddForceContribution( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        if( bp::override func_AddForceContribution = this->get_override( "AddForceContribution" ) )
            func_AddForceContribution( boost::ref(rCellPopulation) );
        else{
            this->NagaiHondaForce< 2 >::AddForceContribution( boost::ref(rCellPopulation) );
        }
    }
    
    void default_AddForceContribution( ::AbstractCellPopulation< 2, 2 > & rCellPopulation ) {
        NagaiHondaForce< 2 >::AddForceContribution( boost::ref(rCellPopulation) );
    }

    virtual double GetAdhesionParameter( ::Node< 2 > * pNodeA, ::Node< 2 > * pNodeB, ::VertexBasedCellPopulation< 2 > & rVertexCellPopulation ) {
        if( bp::override func_GetAdhesionParameter = this->get_override( "GetAdhesionParameter" ) )
            return func_GetAdhesionParameter( boost::python::ptr(pNodeA), boost::python::ptr(pNodeB), boost::ref(rVertexCellPopulation) );
        else{
            return this->NagaiHondaForce< 2 >::GetAdhesionParameter( boost::python::ptr(pNodeA), boost::python::ptr(pNodeB), boost::ref(rVertexCellPopulation) );
        }
    }
    
    double default_GetAdhesionParameter( ::Node< 2 > * pNodeA, ::Node< 2 > * pNodeB, ::VertexBasedCellPopulation< 2 > & rVertexCellPopulation ) {
        return NagaiHondaForce< 2 >::GetAdhesionParameter( boost::python::ptr(pNodeA), boost::python::ptr(pNodeB), boost::ref(rVertexCellPopulation) );
    }

    virtual void OutputForceParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputForceParameters = this->get_override( "OutputForceParameters" ) )
            func_OutputForceParameters( boost::ref(rParamsFile) );
        else{
            this->NagaiHondaForce< 2 >::OutputForceParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputForceParameters( ::out_stream & rParamsFile ) {
        NagaiHondaForce< 2 >::OutputForceParameters( boost::ref(rParamsFile) );
    }

    virtual void WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        if( bp::override func_WriteDataToVisualizerSetupFile = this->get_override( "WriteDataToVisualizerSetupFile" ) )
            func_WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        else{
            this->AbstractForce< 2, 2 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        }
    }
    
    void default_WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        AbstractForce< 2, 2 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
    }

};

void register_NagaiHondaForce2_class(){

    bp::class_< NagaiHondaForce_less__2__greater__wrapper, bp::bases< AbstractForce< 2, 2 > > >( "NagaiHondaForce2", bp::init< >() )    
        .def( 
            "AddForceContribution"
            , (void ( ::NagaiHondaForce<2>::* )( ::AbstractCellPopulation< 2, 2 > & ))(&::NagaiHondaForce< 2 >::AddForceContribution)
            , (void ( NagaiHondaForce_less__2__greater__wrapper::* )( ::AbstractCellPopulation< 2, 2 > & ))(&NagaiHondaForce_less__2__greater__wrapper::default_AddForceContribution)
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "GetAdhesionParameter"
            , (double ( ::NagaiHondaForce<2>::* )( ::Node< 2 > *,::Node< 2 > *,::VertexBasedCellPopulation< 2 > & ))(&::NagaiHondaForce< 2 >::GetAdhesionParameter)
            , (double ( NagaiHondaForce_less__2__greater__wrapper::* )( ::Node< 2 > *,::Node< 2 > *,::VertexBasedCellPopulation< 2 > & ))(&NagaiHondaForce_less__2__greater__wrapper::default_GetAdhesionParameter)
            , ( bp::arg("pNodeA"), bp::arg("pNodeB"), bp::arg("rVertexCellPopulation") ) )    
        .def( 
            "GetNagaiHondaCellBoundaryAdhesionEnergyParameter"
            , (double ( ::NagaiHondaForce<2>::* )(  ))( &::NagaiHondaForce< 2 >::GetNagaiHondaCellBoundaryAdhesionEnergyParameter ) )    
        .def( 
            "GetNagaiHondaCellCellAdhesionEnergyParameter"
            , (double ( ::NagaiHondaForce<2>::* )(  ))( &::NagaiHondaForce< 2 >::GetNagaiHondaCellCellAdhesionEnergyParameter ) )    
        .def( 
            "GetNagaiHondaDeformationEnergyParameter"
            , (double ( ::NagaiHondaForce<2>::* )(  ))( &::NagaiHondaForce< 2 >::GetNagaiHondaDeformationEnergyParameter ) )    
        .def( 
            "GetNagaiHondaMembraneSurfaceEnergyParameter"
            , (double ( ::NagaiHondaForce<2>::* )(  ))( &::NagaiHondaForce< 2 >::GetNagaiHondaMembraneSurfaceEnergyParameter ) )    
        .def( 
            "OutputForceParameters"
            , (void ( ::NagaiHondaForce<2>::* )( ::out_stream & ))(&::NagaiHondaForce< 2 >::OutputForceParameters)
            , (void ( NagaiHondaForce_less__2__greater__wrapper::* )( ::out_stream & ))(&NagaiHondaForce_less__2__greater__wrapper::default_OutputForceParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetNagaiHondaCellBoundaryAdhesionEnergyParameter"
            , (void ( ::NagaiHondaForce<2>::* )( double ))( &::NagaiHondaForce< 2 >::SetNagaiHondaCellBoundaryAdhesionEnergyParameter )
            , ( bp::arg("nagaiHondaCellBoundaryAdhesionEnergyParameter") ) )    
        .def( 
            "SetNagaiHondaCellCellAdhesionEnergyParameter"
            , (void ( ::NagaiHondaForce<2>::* )( double ))( &::NagaiHondaForce< 2 >::SetNagaiHondaCellCellAdhesionEnergyParameter )
            , ( bp::arg("nagaiHondaCellCellAdhesionEnergyEnergyParameter") ) )    
        .def( 
            "SetNagaiHondaDeformationEnergyParameter"
            , (void ( ::NagaiHondaForce<2>::* )( double ))( &::NagaiHondaForce< 2 >::SetNagaiHondaDeformationEnergyParameter )
            , ( bp::arg("nagaiHondaDeformationEnergyParameter") ) )    
        .def( 
            "SetNagaiHondaMembraneSurfaceEnergyParameter"
            , (void ( ::NagaiHondaForce<2>::* )( double ))( &::NagaiHondaForce< 2 >::SetNagaiHondaMembraneSurfaceEnergyParameter )
            , ( bp::arg("nagaiHondaMembraneSurfaceEnergyParameter") ) )    
        .def( 
            "WriteDataToVisualizerSetupFile"
            , (void ( ::AbstractForce<2, 2>::* )( ::out_stream & ))(&::AbstractForce< 2, 2 >::WriteDataToVisualizerSetupFile)
            , (void ( NagaiHondaForce_less__2__greater__wrapper::* )( ::out_stream & ))(&NagaiHondaForce_less__2__greater__wrapper::default_WriteDataToVisualizerSetupFile)
            , ( bp::arg("pVizSetupFile") ) );

}