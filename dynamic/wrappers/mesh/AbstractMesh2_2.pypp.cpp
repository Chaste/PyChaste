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
#include "AbstractMesh2_2.pypp.hpp"

namespace bp = boost::python;

struct AbstractMesh_less__2_comma__2__greater__wrapper : AbstractMesh< 2, 2 >, bp::wrapper< AbstractMesh< 2, 2 > > {

    AbstractMesh_less__2_comma__2__greater__wrapper( )
    : AbstractMesh<2, 2>( )
      , bp::wrapper< AbstractMesh< 2, 2 > >(){
        // null constructor
    
    }

    virtual ::ChasteCuboid< 2 > CalculateBoundingBox(  ) const  {
        if( bp::override func_CalculateBoundingBox = this->get_override( "CalculateBoundingBox" ) )
            return func_CalculateBoundingBox(  );
        else{
            return this->AbstractMesh< 2, 2 >::CalculateBoundingBox(  );
        }
    }
    
    ::ChasteCuboid< 2 > default_CalculateBoundingBox(  ) const  {
        return AbstractMesh< 2, 2 >::CalculateBoundingBox( );
    }

    ::ChasteCuboid< 2 > CalculateBoundingBox( ::std::vector< Node<2> * > const & rNodes ) const {
        return AbstractMesh< 2, 2 >::CalculateBoundingBox( boost::ref(rNodes) );
    }

    virtual ::DistributedVectorFactory * GetDistributedVectorFactory(  ) {
        if( bp::override func_GetDistributedVectorFactory = this->get_override( "GetDistributedVectorFactory" ) )
            return func_GetDistributedVectorFactory(  );
        else{
            return this->AbstractMesh< 2, 2 >::GetDistributedVectorFactory(  );
        }
    }
    
    ::DistributedVectorFactory * default_GetDistributedVectorFactory(  ) {
        return AbstractMesh< 2, 2 >::GetDistributedVectorFactory( );
    }

    virtual unsigned int GetNearestNodeIndex( ::ChastePoint< 2 > const & rTestPoint ) {
        if( bp::override func_GetNearestNodeIndex = this->get_override( "GetNearestNodeIndex" ) )
            return func_GetNearestNodeIndex( boost::ref(rTestPoint) );
        else{
            return this->AbstractMesh< 2, 2 >::GetNearestNodeIndex( boost::ref(rTestPoint) );
        }
    }
    
    unsigned int default_GetNearestNodeIndex( ::ChastePoint< 2 > const & rTestPoint ) {
        return AbstractMesh< 2, 2 >::GetNearestNodeIndex( boost::ref(rTestPoint) );
    }

    virtual ::Node< 2 > * GetNodeOrHaloNode( unsigned int index ) const  {
        if( bp::override func_GetNodeOrHaloNode = this->get_override( "GetNodeOrHaloNode" ) )
            return func_GetNodeOrHaloNode( index );
        else{
            return this->AbstractMesh< 2, 2 >::GetNodeOrHaloNode( index );
        }
    }
    
    ::Node< 2 > * default_GetNodeOrHaloNode( unsigned int index ) const  {
        return AbstractMesh< 2, 2 >::GetNodeOrHaloNode( index );
    }

    virtual unsigned int GetNumAllNodes(  ) const  {
        if( bp::override func_GetNumAllNodes = this->get_override( "GetNumAllNodes" ) )
            return func_GetNumAllNodes(  );
        else{
            return this->AbstractMesh< 2, 2 >::GetNumAllNodes(  );
        }
    }
    
    unsigned int default_GetNumAllNodes(  ) const  {
        return AbstractMesh< 2, 2 >::GetNumAllNodes( );
    }

    virtual unsigned int GetNumNodes(  ) const  {
        if( bp::override func_GetNumNodes = this->get_override( "GetNumNodes" ) )
            return func_GetNumNodes(  );
        else{
            return this->AbstractMesh< 2, 2 >::GetNumNodes(  );
        }
    }
    
    unsigned int default_GetNumNodes(  ) const  {
        return AbstractMesh< 2, 2 >::GetNumNodes( );
    }

    virtual ::boost::numeric::ublas::c_vector< double, 2 > GetVectorFromAtoB( ::boost::numeric::ublas::c_vector< double, 2 > const & rLocationA, ::boost::numeric::ublas::c_vector< double, 2 > const & rLocationB ) {
        if( bp::override func_GetVectorFromAtoB = this->get_override( "GetVectorFromAtoB" ) )
            return func_GetVectorFromAtoB( boost::ref(rLocationA), boost::ref(rLocationB) );
        else{
            return this->AbstractMesh< 2, 2 >::GetVectorFromAtoB( boost::ref(rLocationA), boost::ref(rLocationB) );
        }
    }
    
    ::boost::numeric::ublas::c_vector< double, 2 > default_GetVectorFromAtoB( ::boost::numeric::ublas::c_vector< double, 2 > const & rLocationA, ::boost::numeric::ublas::c_vector< double, 2 > const & rLocationB ) {
        return AbstractMesh< 2, 2 >::GetVectorFromAtoB( boost::ref(rLocationA), boost::ref(rLocationB) );
    }

    virtual double GetWidth( unsigned int const & rDimension ) const  {
        if( bp::override func_GetWidth = this->get_override( "GetWidth" ) )
            return func_GetWidth( rDimension );
        else{
            return this->AbstractMesh< 2, 2 >::GetWidth( rDimension );
        }
    }
    
    double default_GetWidth( unsigned int const & rDimension ) const  {
        return AbstractMesh< 2, 2 >::GetWidth( rDimension );
    }

    virtual void PermuteNodes(  ) {
        if( bp::override func_PermuteNodes = this->get_override( "PermuteNodes" ) )
            func_PermuteNodes(  );
        else{
            this->AbstractMesh< 2, 2 >::PermuteNodes(  );
        }
    }
    
    void default_PermuteNodes(  ) {
        AbstractMesh< 2, 2 >::PermuteNodes( );
    }

    virtual void ReadNodesPerProcessorFile( ::std::string const & rNodesPerProcessorFile ) {
        if( bp::override func_ReadNodesPerProcessorFile = this->get_override( "ReadNodesPerProcessorFile" ) )
            func_ReadNodesPerProcessorFile( rNodesPerProcessorFile );
        else{
            this->AbstractMesh< 2, 2 >::ReadNodesPerProcessorFile( rNodesPerProcessorFile );
        }
    }
    
    void default_ReadNodesPerProcessorFile( ::std::string const & rNodesPerProcessorFile ) {
        AbstractMesh< 2, 2 >::ReadNodesPerProcessorFile( rNodesPerProcessorFile );
    }

    virtual void RefreshMesh(  ) {
        if( bp::override func_RefreshMesh = this->get_override( "RefreshMesh" ) )
            func_RefreshMesh(  );
        else{
            this->AbstractMesh< 2, 2 >::RefreshMesh(  );
        }
    }
    
    void default_RefreshMesh(  ) {
        AbstractMesh< 2, 2 >::RefreshMesh( );
    }

    virtual void Rotate( ::boost::numeric::ublas::c_matrix< double, 2, 2 > rotationMatrix ) {
        if( bp::override func_Rotate = this->get_override( "Rotate" ) )
            func_Rotate( rotationMatrix );
        else{
            this->AbstractMesh< 2, 2 >::Rotate( rotationMatrix );
        }
    }
    
    void default_Rotate( ::boost::numeric::ublas::c_matrix< double, 2, 2 > rotationMatrix ) {
        AbstractMesh< 2, 2 >::Rotate( rotationMatrix );
    }

    virtual void Scale( double const xFactor=1., double const yFactor=1., double const zFactor=1. ) {
        if( bp::override func_Scale = this->get_override( "Scale" ) )
            func_Scale( xFactor, yFactor, zFactor );
        else{
            this->AbstractMesh< 2, 2 >::Scale( xFactor, yFactor, zFactor );
        }
    }
    
    void default_Scale( double const xFactor=1., double const yFactor=1., double const zFactor=1. ) {
        AbstractMesh< 2, 2 >::Scale( xFactor, yFactor, zFactor );
    }

    virtual void SetDistributedVectorFactory( ::DistributedVectorFactory * pFactory ) {
        if( bp::override func_SetDistributedVectorFactory = this->get_override( "SetDistributedVectorFactory" ) )
            func_SetDistributedVectorFactory( boost::python::ptr(pFactory) );
        else{
            this->AbstractMesh< 2, 2 >::SetDistributedVectorFactory( boost::python::ptr(pFactory) );
        }
    }
    
    void default_SetDistributedVectorFactory( ::DistributedVectorFactory * pFactory ) {
        AbstractMesh< 2, 2 >::SetDistributedVectorFactory( boost::python::ptr(pFactory) );
    }

    virtual void SetElementOwnerships(  ){
        if( bp::override func_SetElementOwnerships = this->get_override( "SetElementOwnerships" ) )
            func_SetElementOwnerships(  );
        else{
            this->AbstractMesh< 2, 2 >::SetElementOwnerships(  );
        }
    }
    
    virtual void default_SetElementOwnerships(  ){
        AbstractMesh< 2, 2 >::SetElementOwnerships( );
    }

    virtual unsigned int SolveNodeMapping( unsigned int index ) const {
        bp::override func_SolveNodeMapping = this->get_override( "SolveNodeMapping" );
        return func_SolveNodeMapping( index );
    }

    virtual void Translate( ::boost::numeric::ublas::c_vector< double, 2 > const & rDisplacement ) {
        if( bp::override func_Translate = this->get_override( "Translate" ) )
            func_Translate( boost::ref(rDisplacement) );
        else{
            this->AbstractMesh< 2, 2 >::Translate( boost::ref(rDisplacement) );
        }
    }
    
    void default_Translate( ::boost::numeric::ublas::c_vector< double, 2 > const & rDisplacement ) {
        AbstractMesh< 2, 2 >::Translate( boost::ref(rDisplacement) );
    }

};

BOOST_PYTHON_OPAQUE_SPECIALIZED_TYPE_ID( DistributedVectorFactory )

void register_AbstractMesh2_2_class(){

    { //::AbstractMesh< 2, 2 >
        typedef bp::class_< AbstractMesh_less__2_comma__2__greater__wrapper, boost::noncopyable > AbstractMesh2_2_exposer_t;
        AbstractMesh2_2_exposer_t AbstractMesh2_2_exposer = AbstractMesh2_2_exposer_t( "AbstractMesh2_2", bp::init< >() );
        bp::scope AbstractMesh2_2_scope( AbstractMesh2_2_exposer );
        bp::class_< AbstractMesh< 2, 2 >::NodeIterator, boost::noncopyable >( "NodeIterator", bp::init< AbstractMesh< 2, 2 > &, std::vector< Node<2> * >::iterator, bp::optional< bool > >(( bp::arg("rMesh"), bp::arg("nodeIter"), bp::arg("skipDeletedNodes")=(bool)(true) )) )    
            .def( bp::self != bp::self );
        { //::AbstractMesh< 2, 2 >::CalculateBoundingBox
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::ChasteCuboid< 2 > ( exported_class_t::*CalculateBoundingBox_function_type)(  ) const;
            typedef ::ChasteCuboid< 2 > ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_CalculateBoundingBox_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "CalculateBoundingBox"
                , CalculateBoundingBox_function_type(&::AbstractMesh< 2, 2 >::CalculateBoundingBox)
                , default_CalculateBoundingBox_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_CalculateBoundingBox) );
        
        }
        { //::AbstractMesh< 2, 2 >::CalculateBoundingBox
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::ChasteCuboid< 2 > ( AbstractMesh_less__2_comma__2__greater__wrapper::*CalculateBoundingBox_function_type)( ::std::vector< Node<2> * > const & ) const;
            
            AbstractMesh2_2_exposer.def( 
                "CalculateBoundingBox"
                , CalculateBoundingBox_function_type( &AbstractMesh_less__2_comma__2__greater__wrapper::CalculateBoundingBox )
                , ( bp::arg("rNodes") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::CalculateMaximumContainingElementsPerProcess
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*CalculateMaximumContainingElementsPerProcess_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "CalculateMaximumContainingElementsPerProcess"
                , CalculateMaximumContainingElementsPerProcess_function_type( &::AbstractMesh< 2, 2 >::CalculateMaximumContainingElementsPerProcess ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetBoundaryNodeIteratorBegin
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::AbstractMesh< 2, 2 >::BoundaryNodeIterator ( exported_class_t::*GetBoundaryNodeIteratorBegin_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetBoundaryNodeIteratorBegin"
                , GetBoundaryNodeIteratorBegin_function_type( &::AbstractMesh< 2, 2 >::GetBoundaryNodeIteratorBegin ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetBoundaryNodeIteratorEnd
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::AbstractMesh< 2, 2 >::BoundaryNodeIterator ( exported_class_t::*GetBoundaryNodeIteratorEnd_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetBoundaryNodeIteratorEnd"
                , GetBoundaryNodeIteratorEnd_function_type( &::AbstractMesh< 2, 2 >::GetBoundaryNodeIteratorEnd ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetDistanceBetweenNodes
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef double ( exported_class_t::*GetDistanceBetweenNodes_function_type)( unsigned int,unsigned int ) ;
            
            AbstractMesh2_2_exposer.def( 
                "GetDistanceBetweenNodes"
                , GetDistanceBetweenNodes_function_type( &::AbstractMesh< 2, 2 >::GetDistanceBetweenNodes )
                , ( bp::arg("indexA"), bp::arg("indexB") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetDistributedVectorFactory
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::DistributedVectorFactory * ( exported_class_t::*GetDistributedVectorFactory_function_type)(  ) ;
            typedef ::DistributedVectorFactory * ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_GetDistributedVectorFactory_function_type)(  ) ;
            
            AbstractMesh2_2_exposer.def( 
                "GetDistributedVectorFactory"
                , GetDistributedVectorFactory_function_type(&::AbstractMesh< 2, 2 >::GetDistributedVectorFactory)
                , default_GetDistributedVectorFactory_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetDistributedVectorFactory)
                , bp::return_value_policy< bp::return_opaque_pointer >() );
        
        }
        { //::AbstractMesh< 2, 2 >::GetMeshFileBaseName
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::std::string ( exported_class_t::*GetMeshFileBaseName_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetMeshFileBaseName"
                , GetMeshFileBaseName_function_type( &::AbstractMesh< 2, 2 >::GetMeshFileBaseName ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNearestNodeIndex
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNearestNodeIndex_function_type)( ::ChastePoint< 2 > const & ) ;
            typedef unsigned int ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_GetNearestNodeIndex_function_type)( ::ChastePoint< 2 > const & ) ;
            
            AbstractMesh2_2_exposer.def( 
                "GetNearestNodeIndex"
                , GetNearestNodeIndex_function_type(&::AbstractMesh< 2, 2 >::GetNearestNodeIndex)
                , default_GetNearestNodeIndex_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetNearestNodeIndex)
                , ( bp::arg("rTestPoint") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNode
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::Node< 2 > * ( exported_class_t::*GetNode_function_type)( unsigned int ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetNode"
                , GetNode_function_type( &::AbstractMesh< 2, 2 >::GetNode )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNodeFromPrePermutationIndex
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::Node< 2 > * ( exported_class_t::*GetNodeFromPrePermutationIndex_function_type)( unsigned int ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetNodeFromPrePermutationIndex"
                , GetNodeFromPrePermutationIndex_function_type( &::AbstractMesh< 2, 2 >::GetNodeFromPrePermutationIndex )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNodeIteratorBegin
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::AbstractMesh< 2, 2 >::NodeIterator ( exported_class_t::*GetNodeIteratorBegin_function_type)( bool ) ;
            
            AbstractMesh2_2_exposer.def( 
                "GetNodeIteratorBegin"
                , GetNodeIteratorBegin_function_type( &::AbstractMesh< 2, 2 >::GetNodeIteratorBegin )
                , ( bp::arg("skipDeletedNodes")=(bool)(true) ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNodeIteratorEnd
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::AbstractMesh< 2, 2 >::NodeIterator ( exported_class_t::*GetNodeIteratorEnd_function_type)(  ) ;
            
            AbstractMesh2_2_exposer.def( 
                "GetNodeIteratorEnd"
                , GetNodeIteratorEnd_function_type( &::AbstractMesh< 2, 2 >::GetNodeIteratorEnd ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNodeOrHaloNode
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::Node< 2 > * ( exported_class_t::*GetNodeOrHaloNode_function_type)( unsigned int ) const;
            typedef ::Node< 2 > * ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_GetNodeOrHaloNode_function_type)( unsigned int ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetNodeOrHaloNode"
                , GetNodeOrHaloNode_function_type(&::AbstractMesh< 2, 2 >::GetNodeOrHaloNode)
                , default_GetNodeOrHaloNode_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetNodeOrHaloNode)
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNumAllNodes
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumAllNodes_function_type)(  ) const;
            typedef unsigned int ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_GetNumAllNodes_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetNumAllNodes"
                , GetNumAllNodes_function_type(&::AbstractMesh< 2, 2 >::GetNumAllNodes)
                , default_GetNumAllNodes_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetNumAllNodes) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNumBoundaryNodes
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumBoundaryNodes_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetNumBoundaryNodes"
                , GetNumBoundaryNodes_function_type( &::AbstractMesh< 2, 2 >::GetNumBoundaryNodes ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNumNodeAttributes
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumNodeAttributes_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetNumNodeAttributes"
                , GetNumNodeAttributes_function_type( &::AbstractMesh< 2, 2 >::GetNumNodeAttributes ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNumNodes
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumNodes_function_type)(  ) const;
            typedef unsigned int ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_GetNumNodes_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetNumNodes"
                , GetNumNodes_function_type(&::AbstractMesh< 2, 2 >::GetNumNodes)
                , default_GetNumNodes_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetNumNodes) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetVectorFromAtoB
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::boost::numeric::ublas::c_vector< double, 2 > ( exported_class_t::*GetVectorFromAtoB_function_type)( ::boost::numeric::ublas::c_vector< double, 2 > const &,::boost::numeric::ublas::c_vector< double, 2 > const & ) ;
            typedef ::boost::numeric::ublas::c_vector< double, 2 > ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_GetVectorFromAtoB_function_type)( ::boost::numeric::ublas::c_vector< double, 2 > const &,::boost::numeric::ublas::c_vector< double, 2 > const & ) ;
            
            AbstractMesh2_2_exposer.def( 
                "GetVectorFromAtoB"
                , GetVectorFromAtoB_function_type(&::AbstractMesh< 2, 2 >::GetVectorFromAtoB)
                , default_GetVectorFromAtoB_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetVectorFromAtoB)
                , ( bp::arg("rLocationA"), bp::arg("rLocationB") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetWidth
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef double ( exported_class_t::*GetWidth_function_type)( unsigned int const & ) const;
            typedef double ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_GetWidth_function_type)( unsigned int const & ) const;
            
            AbstractMesh2_2_exposer.def( 
                "GetWidth"
                , GetWidth_function_type(&::AbstractMesh< 2, 2 >::GetWidth)
                , default_GetWidth_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetWidth)
                , ( bp::arg("rDimension") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::IsMeshChanging
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef bool ( exported_class_t::*IsMeshChanging_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "IsMeshChanging"
                , IsMeshChanging_function_type( &::AbstractMesh< 2, 2 >::IsMeshChanging ) );
        
        }
        { //::AbstractMesh< 2, 2 >::IsMeshOnDisk
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef bool ( exported_class_t::*IsMeshOnDisk_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "IsMeshOnDisk"
                , IsMeshOnDisk_function_type( &::AbstractMesh< 2, 2 >::IsMeshOnDisk ) );
        
        }
        { //::AbstractMesh< 2, 2 >::PermuteNodes
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*PermuteNodes_function_type)(  ) ;
            typedef void ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_PermuteNodes_function_type)(  ) ;
            
            AbstractMesh2_2_exposer.def( 
                "PermuteNodes"
                , PermuteNodes_function_type(&::AbstractMesh< 2, 2 >::PermuteNodes)
                , default_PermuteNodes_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_PermuteNodes) );
        
        }
        { //::AbstractMesh< 2, 2 >::ReadNodesPerProcessorFile
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*ReadNodesPerProcessorFile_function_type)( ::std::string const & ) ;
            typedef void ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_ReadNodesPerProcessorFile_function_type)( ::std::string const & ) ;
            
            AbstractMesh2_2_exposer.def( 
                "ReadNodesPerProcessorFile"
                , ReadNodesPerProcessorFile_function_type(&::AbstractMesh< 2, 2 >::ReadNodesPerProcessorFile)
                , default_ReadNodesPerProcessorFile_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_ReadNodesPerProcessorFile)
                , ( bp::arg("rNodesPerProcessorFile") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::RefreshMesh
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*RefreshMesh_function_type)(  ) ;
            typedef void ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_RefreshMesh_function_type)(  ) ;
            
            AbstractMesh2_2_exposer.def( 
                "RefreshMesh"
                , RefreshMesh_function_type(&::AbstractMesh< 2, 2 >::RefreshMesh)
                , default_RefreshMesh_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_RefreshMesh) );
        
        }
        { //::AbstractMesh< 2, 2 >::Rotate
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*Rotate_function_type)( ::boost::numeric::ublas::c_matrix< double, 2, 2 > ) ;
            typedef void ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_Rotate_function_type)( ::boost::numeric::ublas::c_matrix< double, 2, 2 > ) ;
            
            AbstractMesh2_2_exposer.def( 
                "Rotate"
                , Rotate_function_type(&::AbstractMesh< 2, 2 >::Rotate)
                , default_Rotate_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_Rotate)
                , ( bp::arg("rotationMatrix") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Rotate
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*Rotate_function_type)( ::boost::numeric::ublas::c_vector< double, 3 >,double ) ;
            
            AbstractMesh2_2_exposer.def( 
                "Rotate"
                , Rotate_function_type( &::AbstractMesh< 2, 2 >::Rotate )
                , ( bp::arg("axis"), bp::arg("angle") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Rotate
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*Rotate_function_type)( double ) ;
            
            AbstractMesh2_2_exposer.def( 
                "Rotate"
                , Rotate_function_type( &::AbstractMesh< 2, 2 >::Rotate )
                , ( bp::arg("theta") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::RotateX
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*RotateX_function_type)( double const ) ;
            
            AbstractMesh2_2_exposer.def( 
                "RotateX"
                , RotateX_function_type( &::AbstractMesh< 2, 2 >::RotateX )
                , ( bp::arg("theta") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::RotateY
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*RotateY_function_type)( double const ) ;
            
            AbstractMesh2_2_exposer.def( 
                "RotateY"
                , RotateY_function_type( &::AbstractMesh< 2, 2 >::RotateY )
                , ( bp::arg("theta") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::RotateZ
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*RotateZ_function_type)( double const ) ;
            
            AbstractMesh2_2_exposer.def( 
                "RotateZ"
                , RotateZ_function_type( &::AbstractMesh< 2, 2 >::RotateZ )
                , ( bp::arg("theta") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Scale
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*Scale_function_type)( double const,double const,double const ) ;
            typedef void ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_Scale_function_type)( double const,double const,double const ) ;
            
            AbstractMesh2_2_exposer.def( 
                "Scale"
                , Scale_function_type(&::AbstractMesh< 2, 2 >::Scale)
                , default_Scale_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_Scale)
                , ( bp::arg("xFactor")=1., bp::arg("yFactor")=1., bp::arg("zFactor")=1. ) );
        
        }
        { //::AbstractMesh< 2, 2 >::SetDistributedVectorFactory
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*SetDistributedVectorFactory_function_type)( ::DistributedVectorFactory * ) ;
            typedef void ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_SetDistributedVectorFactory_function_type)( ::DistributedVectorFactory * ) ;
            
            AbstractMesh2_2_exposer.def( 
                "SetDistributedVectorFactory"
                , SetDistributedVectorFactory_function_type(&::AbstractMesh< 2, 2 >::SetDistributedVectorFactory)
                , default_SetDistributedVectorFactory_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_SetDistributedVectorFactory)
                , ( bp::arg("pFactory") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::SetElementOwnerships
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( AbstractMesh_less__2_comma__2__greater__wrapper::*SetElementOwnerships_function_type)(  ) ;
            
            AbstractMesh2_2_exposer.def( 
                "SetElementOwnerships"
                , SetElementOwnerships_function_type( &AbstractMesh_less__2_comma__2__greater__wrapper::default_SetElementOwnerships ) );
        
        }
        { //::AbstractMesh< 2, 2 >::SetMeshHasChangedSinceLoading
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*SetMeshHasChangedSinceLoading_function_type)(  ) ;
            
            AbstractMesh2_2_exposer.def( 
                "SetMeshHasChangedSinceLoading"
                , SetMeshHasChangedSinceLoading_function_type( &::AbstractMesh< 2, 2 >::SetMeshHasChangedSinceLoading ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Translate
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*Translate_function_type)( ::boost::numeric::ublas::c_vector< double, 2 > const & ) ;
            typedef void ( AbstractMesh_less__2_comma__2__greater__wrapper::*default_Translate_function_type)( ::boost::numeric::ublas::c_vector< double, 2 > const & ) ;
            
            AbstractMesh2_2_exposer.def( 
                "Translate"
                , Translate_function_type(&::AbstractMesh< 2, 2 >::Translate)
                , default_Translate_function_type(&AbstractMesh_less__2_comma__2__greater__wrapper::default_Translate)
                , ( bp::arg("rDisplacement") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Translate
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef void ( exported_class_t::*Translate_function_type)( double const,double const,double const ) ;
            
            AbstractMesh2_2_exposer.def( 
                "Translate"
                , Translate_function_type( &::AbstractMesh< 2, 2 >::Translate )
                , ( bp::arg("xMovement")=0., bp::arg("yMovement")=0., bp::arg("zMovement")=0. ) );
        
        }
        { //::AbstractMesh< 2, 2 >::rGetNodePermutation
        
            typedef AbstractMesh< 2, 2 > exported_class_t;
            typedef ::std::vector< unsigned int > const & ( exported_class_t::*rGetNodePermutation_function_type)(  ) const;
            
            AbstractMesh2_2_exposer.def( 
                "rGetNodePermutation"
                , rGetNodePermutation_function_type( &::AbstractMesh< 2, 2 >::rGetNodePermutation )
                , bp::return_internal_reference< >() );
        
        }
    }

}