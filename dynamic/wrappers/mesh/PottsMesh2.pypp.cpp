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
#include "classes_to_be_wrapped.hpp"
#include "PottsMesh2.pypp.hpp"

namespace bp = boost::python;

struct PottsMesh_less__2__greater__wrapper : PottsMesh< 2 >, bp::wrapper< PottsMesh< 2 > > {

    PottsMesh_less__2__greater__wrapper(::std::vector< Node<2> * > nodes, ::std::vector< PottsElement<2> * > pottsElements, ::std::vector< std::set< unsigned int > > vonNeumannNeighbouringNodeIndices, ::std::vector< std::set< unsigned int > > mooreNeighbouringNodeIndices )
    : PottsMesh<2>( nodes, pottsElements, vonNeumannNeighbouringNodeIndices, mooreNeighbouringNodeIndices )
      , bp::wrapper< PottsMesh< 2 > >(){
        // constructor
    
    }

    PottsMesh_less__2__greater__wrapper( )
    : PottsMesh<2>( )
      , bp::wrapper< PottsMesh< 2 > >(){
        // null constructor
    
    }

    virtual void Clear(  ) {
        if( bp::override func_Clear = this->get_override( "Clear" ) )
            func_Clear(  );
        else{
            this->PottsMesh< 2 >::Clear(  );
        }
    }
    
    void default_Clear(  ) {
        PottsMesh< 2 >::Clear( );
    }

    virtual ::boost::numeric::ublas::c_vector< double, 2 > GetCentroidOfElement( unsigned int index ) {
        if( bp::override func_GetCentroidOfElement = this->get_override( "GetCentroidOfElement" ) )
            return func_GetCentroidOfElement( index );
        else{
            return this->PottsMesh< 2 >::GetCentroidOfElement( index );
        }
    }
    
    ::boost::numeric::ublas::c_vector< double, 2 > default_GetCentroidOfElement( unsigned int index ) {
        return PottsMesh< 2 >::GetCentroidOfElement( index );
    }

    virtual unsigned int GetNumElements(  ) const  {
        if( bp::override func_GetNumElements = this->get_override( "GetNumElements" ) )
            return func_GetNumElements(  );
        else{
            return this->PottsMesh< 2 >::GetNumElements(  );
        }
    }
    
    unsigned int default_GetNumElements(  ) const  {
        return PottsMesh< 2 >::GetNumElements( );
    }

    virtual unsigned int GetNumNodes(  ) const  {
        if( bp::override func_GetNumNodes = this->get_override( "GetNumNodes" ) )
            return func_GetNumNodes(  );
        else{
            return this->PottsMesh< 2 >::GetNumNodes(  );
        }
    }
    
    unsigned int default_GetNumNodes(  ) const  {
        return PottsMesh< 2 >::GetNumNodes( );
    }

    virtual double GetSurfaceAreaOfElement( unsigned int index ) {
        if( bp::override func_GetSurfaceAreaOfElement = this->get_override( "GetSurfaceAreaOfElement" ) )
            return func_GetSurfaceAreaOfElement( index );
        else{
            return this->PottsMesh< 2 >::GetSurfaceAreaOfElement( index );
        }
    }
    
    double default_GetSurfaceAreaOfElement( unsigned int index ) {
        return PottsMesh< 2 >::GetSurfaceAreaOfElement( index );
    }

    virtual double GetVolumeOfElement( unsigned int index ) {
        if( bp::override func_GetVolumeOfElement = this->get_override( "GetVolumeOfElement" ) )
            return func_GetVolumeOfElement( index );
        else{
            return this->PottsMesh< 2 >::GetVolumeOfElement( index );
        }
    }
    
    double default_GetVolumeOfElement( unsigned int index ) {
        return PottsMesh< 2 >::GetVolumeOfElement( index );
    }

    unsigned int SolveBoundaryElementMapping( unsigned int index ) const {
        return PottsMesh< 2 >::SolveBoundaryElementMapping( index );
    }

    unsigned int SolveElementMapping( unsigned int index ) const {
        return PottsMesh< 2 >::SolveElementMapping( index );
    }

    virtual unsigned int SolveNodeMapping( unsigned int index ) const {
        if( bp::override func_SolveNodeMapping = this->get_override( "SolveNodeMapping" ) )
            return func_SolveNodeMapping( index );
        else{
            return this->PottsMesh< 2 >::SolveNodeMapping( index );
        }
    }
    
    virtual unsigned int default_SolveNodeMapping( unsigned int index ) const {
        return PottsMesh< 2 >::SolveNodeMapping( index );
    }

    ::ChasteCuboid< 2 > CalculateBoundingBox( ::std::vector< Node<2> * > const & rNodes ) const {
        return AbstractMesh< 2, 2 >::CalculateBoundingBox( boost::ref(rNodes) );
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

void register_PottsMesh2_class(){

    { //::PottsMesh< 2 >
        typedef bp::class_< PottsMesh_less__2__greater__wrapper, bp::bases< AbstractMesh< 2, 2 > >, boost::noncopyable > PottsMesh2_exposer_t;
        PottsMesh2_exposer_t PottsMesh2_exposer = PottsMesh2_exposer_t( "PottsMesh2", bp::init< std::vector< Node<2> * >, std::vector< PottsElement<2> * >, std::vector< std::set< unsigned int > >, std::vector< std::set< unsigned int > > >(( bp::arg("nodes"), bp::arg("pottsElements"), bp::arg("vonNeumannNeighbouringNodeIndices"), bp::arg("mooreNeighbouringNodeIndices") )) );
        bp::scope PottsMesh2_scope( PottsMesh2_exposer );
        bp::class_< PottsMesh< 2 >::PottsElementIterator, boost::noncopyable >( "PottsElementIterator", bp::init< PottsMesh< 2 > &, std::vector< PottsElement<2> * >::iterator, bp::optional< bool > >(( bp::arg("rMesh"), bp::arg("elementIter"), bp::arg("skipDeletedElements")=(bool)(true) )) )    
            .def( bp::self != bp::self );
        PottsMesh2_exposer.def( bp::init< >() );
        { //::PottsMesh< 2 >::AddElement
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*AddElement_function_type)( ::PottsElement< 2 > * ) ;
            
            PottsMesh2_exposer.def( 
                "AddElement"
                , AddElement_function_type( &::PottsMesh< 2 >::AddElement )
                , ( bp::arg("pNewElement") ) );
        
        }
        { //::PottsMesh< 2 >::Clear
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*Clear_function_type)(  ) ;
            typedef void ( PottsMesh_less__2__greater__wrapper::*default_Clear_function_type)(  ) ;
            
            PottsMesh2_exposer.def( 
                "Clear"
                , Clear_function_type(&::PottsMesh< 2 >::Clear)
                , default_Clear_function_type(&PottsMesh_less__2__greater__wrapper::default_Clear) );
        
        }
        { //::PottsMesh< 2 >::ConstructFromMeshReader
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*ConstructFromMeshReader_function_type)( ::AbstractMeshReader< 2, 2 > & ) ;
            
            PottsMesh2_exposer.def( 
                "ConstructFromMeshReader"
                , ConstructFromMeshReader_function_type( &::PottsMesh< 2 >::ConstructFromMeshReader )
                , ( bp::arg("rMeshReader") ) );
        
        }
        { //::PottsMesh< 2 >::DeleteElement
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*DeleteElement_function_type)( unsigned int ) ;
            
            PottsMesh2_exposer.def( 
                "DeleteElement"
                , DeleteElement_function_type( &::PottsMesh< 2 >::DeleteElement )
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 2 >::DeleteNode
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*DeleteNode_function_type)( unsigned int ) ;
            
            PottsMesh2_exposer.def( 
                "DeleteNode"
                , DeleteNode_function_type( &::PottsMesh< 2 >::DeleteNode )
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 2 >::DivideElement
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*DivideElement_function_type)( ::PottsElement< 2 > *,bool ) ;
            
            PottsMesh2_exposer.def( 
                "DivideElement"
                , DivideElement_function_type( &::PottsMesh< 2 >::DivideElement )
                , ( bp::arg("pElement"), bp::arg("placeOriginalElementBelow")=(bool)(false) ) );
        
        }
        { //::PottsMesh< 2 >::GetCentroidOfElement
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::boost::numeric::ublas::c_vector< double, 2 > ( exported_class_t::*GetCentroidOfElement_function_type)( unsigned int ) ;
            typedef ::boost::numeric::ublas::c_vector< double, 2 > ( PottsMesh_less__2__greater__wrapper::*default_GetCentroidOfElement_function_type)( unsigned int ) ;
            
            PottsMesh2_exposer.def( 
                "GetCentroidOfElement"
                , GetCentroidOfElement_function_type(&::PottsMesh< 2 >::GetCentroidOfElement)
                , default_GetCentroidOfElement_function_type(&PottsMesh_less__2__greater__wrapper::default_GetCentroidOfElement)
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 2 >::GetElement
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::PottsElement< 2 > * ( exported_class_t::*GetElement_function_type)( unsigned int ) const;
            
            PottsMesh2_exposer.def( 
                "GetElement"
                , GetElement_function_type( &::PottsMesh< 2 >::GetElement )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::PottsMesh< 2 >::GetElementIteratorBegin
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::PottsMesh< 2 >::PottsElementIterator ( exported_class_t::*GetElementIteratorBegin_function_type)( bool ) ;
            
            PottsMesh2_exposer.def( 
                "GetElementIteratorBegin"
                , GetElementIteratorBegin_function_type( &::PottsMesh< 2 >::GetElementIteratorBegin )
                , ( bp::arg("skipDeletedElements")=(bool)(true) ) );
        
        }
        { //::PottsMesh< 2 >::GetElementIteratorEnd
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::PottsMesh< 2 >::PottsElementIterator ( exported_class_t::*GetElementIteratorEnd_function_type)(  ) ;
            
            PottsMesh2_exposer.def( 
                "GetElementIteratorEnd"
                , GetElementIteratorEnd_function_type( &::PottsMesh< 2 >::GetElementIteratorEnd ) );
        
        }
        { //::PottsMesh< 2 >::GetMooreNeighbouringNodeIndices
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::std::set< unsigned int > ( exported_class_t::*GetMooreNeighbouringNodeIndices_function_type)( unsigned int ) ;
            
            PottsMesh2_exposer.def( 
                "GetMooreNeighbouringNodeIndices"
                , GetMooreNeighbouringNodeIndices_function_type( &::PottsMesh< 2 >::GetMooreNeighbouringNodeIndices )
                , ( bp::arg("nodeIndex") ) );
        
        }
        { //::PottsMesh< 2 >::GetNeighbouringElementIndices
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::std::set< unsigned int > ( exported_class_t::*GetNeighbouringElementIndices_function_type)( unsigned int ) ;
            
            PottsMesh2_exposer.def( 
                "GetNeighbouringElementIndices"
                , GetNeighbouringElementIndices_function_type( &::PottsMesh< 2 >::GetNeighbouringElementIndices )
                , ( bp::arg("elementIndex") ) );
        
        }
        { //::PottsMesh< 2 >::GetNumAllElements
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumAllElements_function_type)(  ) const;
            
            PottsMesh2_exposer.def( 
                "GetNumAllElements"
                , GetNumAllElements_function_type( &::PottsMesh< 2 >::GetNumAllElements ) );
        
        }
        { //::PottsMesh< 2 >::GetNumElements
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumElements_function_type)(  ) const;
            typedef unsigned int ( PottsMesh_less__2__greater__wrapper::*default_GetNumElements_function_type)(  ) const;
            
            PottsMesh2_exposer.def( 
                "GetNumElements"
                , GetNumElements_function_type(&::PottsMesh< 2 >::GetNumElements)
                , default_GetNumElements_function_type(&PottsMesh_less__2__greater__wrapper::default_GetNumElements) );
        
        }
        { //::PottsMesh< 2 >::GetNumNodes
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumNodes_function_type)(  ) const;
            typedef unsigned int ( PottsMesh_less__2__greater__wrapper::*default_GetNumNodes_function_type)(  ) const;
            
            PottsMesh2_exposer.def( 
                "GetNumNodes"
                , GetNumNodes_function_type(&::PottsMesh< 2 >::GetNumNodes)
                , default_GetNumNodes_function_type(&PottsMesh_less__2__greater__wrapper::default_GetNumNodes) );
        
        }
        { //::PottsMesh< 2 >::GetSurfaceAreaOfElement
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef double ( exported_class_t::*GetSurfaceAreaOfElement_function_type)( unsigned int ) ;
            typedef double ( PottsMesh_less__2__greater__wrapper::*default_GetSurfaceAreaOfElement_function_type)( unsigned int ) ;
            
            PottsMesh2_exposer.def( 
                "GetSurfaceAreaOfElement"
                , GetSurfaceAreaOfElement_function_type(&::PottsMesh< 2 >::GetSurfaceAreaOfElement)
                , default_GetSurfaceAreaOfElement_function_type(&PottsMesh_less__2__greater__wrapper::default_GetSurfaceAreaOfElement)
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 2 >::GetVolumeOfElement
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef double ( exported_class_t::*GetVolumeOfElement_function_type)( unsigned int ) ;
            typedef double ( PottsMesh_less__2__greater__wrapper::*default_GetVolumeOfElement_function_type)( unsigned int ) ;
            
            PottsMesh2_exposer.def( 
                "GetVolumeOfElement"
                , GetVolumeOfElement_function_type(&::PottsMesh< 2 >::GetVolumeOfElement)
                , default_GetVolumeOfElement_function_type(&PottsMesh_less__2__greater__wrapper::default_GetVolumeOfElement)
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 2 >::GetVonNeumannNeighbouringNodeIndices
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::std::set< unsigned int > ( exported_class_t::*GetVonNeumannNeighbouringNodeIndices_function_type)( unsigned int ) ;
            
            PottsMesh2_exposer.def( 
                "GetVonNeumannNeighbouringNodeIndices"
                , GetVonNeumannNeighbouringNodeIndices_function_type( &::PottsMesh< 2 >::GetVonNeumannNeighbouringNodeIndices )
                , ( bp::arg("nodeIndex") ) );
        
        }
        { //::PottsMesh< 2 >::RemoveDeletedElements
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*RemoveDeletedElements_function_type)(  ) ;
            
            PottsMesh2_exposer.def( 
                "RemoveDeletedElements"
                , RemoveDeletedElements_function_type( &::PottsMesh< 2 >::RemoveDeletedElements ) );
        
        }
        { //::PottsMesh< 2 >::SolveBoundaryElementMapping
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( PottsMesh_less__2__greater__wrapper::*SolveBoundaryElementMapping_function_type)( unsigned int ) const;
            
            PottsMesh2_exposer.def( 
                "SolveBoundaryElementMapping"
                , SolveBoundaryElementMapping_function_type( &PottsMesh_less__2__greater__wrapper::SolveBoundaryElementMapping )
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 2 >::SolveElementMapping
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( PottsMesh_less__2__greater__wrapper::*SolveElementMapping_function_type)( unsigned int ) const;
            
            PottsMesh2_exposer.def( 
                "SolveElementMapping"
                , SolveElementMapping_function_type( &PottsMesh_less__2__greater__wrapper::SolveElementMapping )
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 2 >::SolveNodeMapping
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( PottsMesh_less__2__greater__wrapper::*SolveNodeMapping_function_type)( unsigned int ) const;
            
            PottsMesh2_exposer.def( 
                "SolveNodeMapping"
                , SolveNodeMapping_function_type( &PottsMesh_less__2__greater__wrapper::default_SolveNodeMapping )
                , ( bp::arg("index") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::CalculateBoundingBox
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::ChasteCuboid< 2 > ( PottsMesh_less__2__greater__wrapper::*CalculateBoundingBox_function_type)( ::std::vector< Node<2> * > const & ) const;
            
            PottsMesh2_exposer.def( 
                "CalculateBoundingBox"
                , CalculateBoundingBox_function_type( &PottsMesh_less__2__greater__wrapper::CalculateBoundingBox )
                , ( bp::arg("rNodes") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::CalculateBoundingBox
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::ChasteCuboid< 2 > ( exported_class_t::*CalculateBoundingBox_function_type)(  ) const;
            typedef ::ChasteCuboid< 2 > ( PottsMesh_less__2__greater__wrapper::*default_CalculateBoundingBox_function_type)(  ) const;
            
            PottsMesh2_exposer.def( 
                "CalculateBoundingBox"
                , CalculateBoundingBox_function_type(&::AbstractMesh< 2, 2 >::CalculateBoundingBox)
                , default_CalculateBoundingBox_function_type(&PottsMesh_less__2__greater__wrapper::default_CalculateBoundingBox) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetDistributedVectorFactory
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::DistributedVectorFactory * ( exported_class_t::*GetDistributedVectorFactory_function_type)(  ) ;
            typedef ::DistributedVectorFactory * ( PottsMesh_less__2__greater__wrapper::*default_GetDistributedVectorFactory_function_type)(  ) ;
            
            PottsMesh2_exposer.def( 
                "GetDistributedVectorFactory"
                , GetDistributedVectorFactory_function_type(&::AbstractMesh< 2, 2 >::GetDistributedVectorFactory)
                , default_GetDistributedVectorFactory_function_type(&PottsMesh_less__2__greater__wrapper::default_GetDistributedVectorFactory)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNearestNodeIndex
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNearestNodeIndex_function_type)( ::ChastePoint< 2 > const & ) ;
            typedef unsigned int ( PottsMesh_less__2__greater__wrapper::*default_GetNearestNodeIndex_function_type)( ::ChastePoint< 2 > const & ) ;
            
            PottsMesh2_exposer.def( 
                "GetNearestNodeIndex"
                , GetNearestNodeIndex_function_type(&::AbstractMesh< 2, 2 >::GetNearestNodeIndex)
                , default_GetNearestNodeIndex_function_type(&PottsMesh_less__2__greater__wrapper::default_GetNearestNodeIndex)
                , ( bp::arg("rTestPoint") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNodeOrHaloNode
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::Node< 2 > * ( exported_class_t::*GetNodeOrHaloNode_function_type)( unsigned int ) const;
            typedef ::Node< 2 > * ( PottsMesh_less__2__greater__wrapper::*default_GetNodeOrHaloNode_function_type)( unsigned int ) const;
            
            PottsMesh2_exposer.def( 
                "GetNodeOrHaloNode"
                , GetNodeOrHaloNode_function_type(&::AbstractMesh< 2, 2 >::GetNodeOrHaloNode)
                , default_GetNodeOrHaloNode_function_type(&PottsMesh_less__2__greater__wrapper::default_GetNodeOrHaloNode)
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::AbstractMesh< 2, 2 >::GetNumAllNodes
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumAllNodes_function_type)(  ) const;
            typedef unsigned int ( PottsMesh_less__2__greater__wrapper::*default_GetNumAllNodes_function_type)(  ) const;
            
            PottsMesh2_exposer.def( 
                "GetNumAllNodes"
                , GetNumAllNodes_function_type(&::AbstractMesh< 2, 2 >::GetNumAllNodes)
                , default_GetNumAllNodes_function_type(&PottsMesh_less__2__greater__wrapper::default_GetNumAllNodes) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetVectorFromAtoB
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef ::boost::numeric::ublas::c_vector< double, 2 > ( exported_class_t::*GetVectorFromAtoB_function_type)( ::boost::numeric::ublas::c_vector< double, 2 > const &,::boost::numeric::ublas::c_vector< double, 2 > const & ) ;
            typedef ::boost::numeric::ublas::c_vector< double, 2 > ( PottsMesh_less__2__greater__wrapper::*default_GetVectorFromAtoB_function_type)( ::boost::numeric::ublas::c_vector< double, 2 > const &,::boost::numeric::ublas::c_vector< double, 2 > const & ) ;
            
            PottsMesh2_exposer.def( 
                "GetVectorFromAtoB"
                , GetVectorFromAtoB_function_type(&::AbstractMesh< 2, 2 >::GetVectorFromAtoB)
                , default_GetVectorFromAtoB_function_type(&PottsMesh_less__2__greater__wrapper::default_GetVectorFromAtoB)
                , ( bp::arg("rLocationA"), bp::arg("rLocationB") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::GetWidth
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef double ( exported_class_t::*GetWidth_function_type)( unsigned int const & ) const;
            typedef double ( PottsMesh_less__2__greater__wrapper::*default_GetWidth_function_type)( unsigned int const & ) const;
            
            PottsMesh2_exposer.def( 
                "GetWidth"
                , GetWidth_function_type(&::AbstractMesh< 2, 2 >::GetWidth)
                , default_GetWidth_function_type(&PottsMesh_less__2__greater__wrapper::default_GetWidth)
                , ( bp::arg("rDimension") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::PermuteNodes
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*PermuteNodes_function_type)(  ) ;
            typedef void ( PottsMesh_less__2__greater__wrapper::*default_PermuteNodes_function_type)(  ) ;
            
            PottsMesh2_exposer.def( 
                "PermuteNodes"
                , PermuteNodes_function_type(&::AbstractMesh< 2, 2 >::PermuteNodes)
                , default_PermuteNodes_function_type(&PottsMesh_less__2__greater__wrapper::default_PermuteNodes) );
        
        }
        { //::AbstractMesh< 2, 2 >::ReadNodesPerProcessorFile
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*ReadNodesPerProcessorFile_function_type)( ::std::string const & ) ;
            typedef void ( PottsMesh_less__2__greater__wrapper::*default_ReadNodesPerProcessorFile_function_type)( ::std::string const & ) ;
            
            PottsMesh2_exposer.def( 
                "ReadNodesPerProcessorFile"
                , ReadNodesPerProcessorFile_function_type(&::AbstractMesh< 2, 2 >::ReadNodesPerProcessorFile)
                , default_ReadNodesPerProcessorFile_function_type(&PottsMesh_less__2__greater__wrapper::default_ReadNodesPerProcessorFile)
                , ( bp::arg("rNodesPerProcessorFile") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::RefreshMesh
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*RefreshMesh_function_type)(  ) ;
            typedef void ( PottsMesh_less__2__greater__wrapper::*default_RefreshMesh_function_type)(  ) ;
            
            PottsMesh2_exposer.def( 
                "RefreshMesh"
                , RefreshMesh_function_type(&::AbstractMesh< 2, 2 >::RefreshMesh)
                , default_RefreshMesh_function_type(&PottsMesh_less__2__greater__wrapper::default_RefreshMesh) );
        
        }
        { //::AbstractMesh< 2, 2 >::Rotate
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*Rotate_function_type)( ::boost::numeric::ublas::c_matrix< double, 2, 2 > ) ;
            typedef void ( PottsMesh_less__2__greater__wrapper::*default_Rotate_function_type)( ::boost::numeric::ublas::c_matrix< double, 2, 2 > ) ;
            
            PottsMesh2_exposer.def( 
                "Rotate"
                , Rotate_function_type(&::AbstractMesh< 2, 2 >::Rotate)
                , default_Rotate_function_type(&PottsMesh_less__2__greater__wrapper::default_Rotate)
                , ( bp::arg("rotationMatrix") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Rotate
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*Rotate_function_type)( ::boost::numeric::ublas::c_vector< double, 3 >,double ) ;
            
            PottsMesh2_exposer.def( 
                "Rotate"
                , Rotate_function_type( &::AbstractMesh< 2, 2 >::Rotate )
                , ( bp::arg("axis"), bp::arg("angle") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Rotate
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*Rotate_function_type)( double ) ;
            
            PottsMesh2_exposer.def( 
                "Rotate"
                , Rotate_function_type( &::AbstractMesh< 2, 2 >::Rotate )
                , ( bp::arg("theta") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Scale
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*Scale_function_type)( double const,double const,double const ) ;
            typedef void ( PottsMesh_less__2__greater__wrapper::*default_Scale_function_type)( double const,double const,double const ) ;
            
            PottsMesh2_exposer.def( 
                "Scale"
                , Scale_function_type(&::AbstractMesh< 2, 2 >::Scale)
                , default_Scale_function_type(&PottsMesh_less__2__greater__wrapper::default_Scale)
                , ( bp::arg("xFactor")=1., bp::arg("yFactor")=1., bp::arg("zFactor")=1. ) );
        
        }
        { //::AbstractMesh< 2, 2 >::SetDistributedVectorFactory
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetDistributedVectorFactory_function_type)( ::DistributedVectorFactory * ) ;
            typedef void ( PottsMesh_less__2__greater__wrapper::*default_SetDistributedVectorFactory_function_type)( ::DistributedVectorFactory * ) ;
            
            PottsMesh2_exposer.def( 
                "SetDistributedVectorFactory"
                , SetDistributedVectorFactory_function_type(&::AbstractMesh< 2, 2 >::SetDistributedVectorFactory)
                , default_SetDistributedVectorFactory_function_type(&PottsMesh_less__2__greater__wrapper::default_SetDistributedVectorFactory)
                , ( bp::arg("pFactory") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::SetElementOwnerships
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( PottsMesh_less__2__greater__wrapper::*SetElementOwnerships_function_type)(  ) ;
            
            PottsMesh2_exposer.def( 
                "SetElementOwnerships"
                , SetElementOwnerships_function_type( &PottsMesh_less__2__greater__wrapper::default_SetElementOwnerships ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Translate
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*Translate_function_type)( ::boost::numeric::ublas::c_vector< double, 2 > const & ) ;
            typedef void ( PottsMesh_less__2__greater__wrapper::*default_Translate_function_type)( ::boost::numeric::ublas::c_vector< double, 2 > const & ) ;
            
            PottsMesh2_exposer.def( 
                "Translate"
                , Translate_function_type(&::AbstractMesh< 2, 2 >::Translate)
                , default_Translate_function_type(&PottsMesh_less__2__greater__wrapper::default_Translate)
                , ( bp::arg("rDisplacement") ) );
        
        }
        { //::AbstractMesh< 2, 2 >::Translate
        
            typedef PottsMesh< 2 > exported_class_t;
            typedef void ( exported_class_t::*Translate_function_type)( double const,double const,double const ) ;
            
            PottsMesh2_exposer.def( 
                "Translate"
                , Translate_function_type( &::AbstractMesh< 2, 2 >::Translate )
                , ( bp::arg("xMovement")=0., bp::arg("yMovement")=0., bp::arg("zMovement")=0. ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< PottsMesh<2> > >();
        bp::implicitly_convertible< boost::shared_ptr< PottsMesh< 2 > >, boost::shared_ptr< AbstractMesh< 2, 2 > > >();
    }

}
