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
#include "mesh_headers.hpp"
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

void register_AbstractMesh2_2_class(){

    bp::class_< AbstractMesh_less__2_comma__2__greater__wrapper, boost::noncopyable >( "AbstractMesh2_2", bp::init< >() )    
        .def( 
            "CalculateBoundingBox"
            , (::ChasteCuboid< 2 > ( ::AbstractMesh<2, 2>::* )(  )const)(&::AbstractMesh< 2, 2 >::CalculateBoundingBox)
            , (::ChasteCuboid< 2 > ( AbstractMesh_less__2_comma__2__greater__wrapper::* )(  )const)(&AbstractMesh_less__2_comma__2__greater__wrapper::default_CalculateBoundingBox) )    
        .def( 
            "CalculateBoundingBox"
            , (::ChasteCuboid<2> ( AbstractMesh_less__2_comma__2__greater__wrapper::* )( ::std::vector<Node<2> *, std::allocator<Node<2> *> > const & )const)(&AbstractMesh_less__2_comma__2__greater__wrapper::CalculateBoundingBox)
            , ( bp::arg("rNodes") ) )    
        .def( 
            "CalculateMaximumContainingElementsPerProcess"
            , (unsigned int ( ::AbstractMesh<2, 2>::* )(  )const)( &::AbstractMesh< 2, 2 >::CalculateMaximumContainingElementsPerProcess ) )    
        .def( 
            "GetBoundaryNodeIteratorBegin"
            , (::AbstractMesh< 2, 2 >::BoundaryNodeIterator ( ::AbstractMesh<2, 2>::* )(  )const)( &::AbstractMesh< 2, 2 >::GetBoundaryNodeIteratorBegin ) )    
        .def( 
            "GetBoundaryNodeIteratorEnd"
            , (::AbstractMesh< 2, 2 >::BoundaryNodeIterator ( ::AbstractMesh<2, 2>::* )(  )const)( &::AbstractMesh< 2, 2 >::GetBoundaryNodeIteratorEnd ) )    
        .def( 
            "GetDistanceBetweenNodes"
            , (double ( ::AbstractMesh<2, 2>::* )( unsigned int,unsigned int ))( &::AbstractMesh< 2, 2 >::GetDistanceBetweenNodes )
            , ( bp::arg("indexA"), bp::arg("indexB") ) )    
        .def( 
            "GetMeshFileBaseName"
            , (::std::string ( ::AbstractMesh<2, 2>::* )(  )const)( &::AbstractMesh< 2, 2 >::GetMeshFileBaseName ) )    
        .def( 
            "GetNearestNodeIndex"
            , (unsigned int ( ::AbstractMesh<2, 2>::* )( ::ChastePoint< 2 > const & ))(&::AbstractMesh< 2, 2 >::GetNearestNodeIndex)
            , (unsigned int ( AbstractMesh_less__2_comma__2__greater__wrapper::* )( ::ChastePoint< 2 > const & ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetNearestNodeIndex)
            , ( bp::arg("rTestPoint") ) )    
        .def( 
            "GetNode"
            , (::Node< 2 > * ( ::AbstractMesh<2, 2>::* )( unsigned int )const)( &::AbstractMesh< 2, 2 >::GetNode )
            , ( bp::arg("index") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "GetNodeIteratorBegin"
            , (::AbstractMesh< 2, 2 >::NodeIterator ( ::AbstractMesh<2, 2>::* )( bool ))( &::AbstractMesh< 2, 2 >::GetNodeIteratorBegin )
            , ( bp::arg("skipDeletedNodes")=(bool)(true) ) )    
        .def( 
            "GetNodeIteratorEnd"
            , (::AbstractMesh< 2, 2 >::NodeIterator ( ::AbstractMesh<2, 2>::* )(  ))( &::AbstractMesh< 2, 2 >::GetNodeIteratorEnd ) )    
        .def( 
            "GetNumAllNodes"
            , (unsigned int ( ::AbstractMesh<2, 2>::* )(  )const)(&::AbstractMesh< 2, 2 >::GetNumAllNodes)
            , (unsigned int ( AbstractMesh_less__2_comma__2__greater__wrapper::* )(  )const)(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetNumAllNodes) )    
        .def( 
            "GetNumBoundaryNodes"
            , (unsigned int ( ::AbstractMesh<2, 2>::* )(  )const)( &::AbstractMesh< 2, 2 >::GetNumBoundaryNodes ) )    
        .def( 
            "GetNumNodeAttributes"
            , (unsigned int ( ::AbstractMesh<2, 2>::* )(  )const)( &::AbstractMesh< 2, 2 >::GetNumNodeAttributes ) )    
        .def( 
            "GetNumNodes"
            , (unsigned int ( ::AbstractMesh<2, 2>::* )(  )const)(&::AbstractMesh< 2, 2 >::GetNumNodes)
            , (unsigned int ( AbstractMesh_less__2_comma__2__greater__wrapper::* )(  )const)(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetNumNodes) )    
        .def( 
            "GetVectorFromAtoB"
            , (::boost::numeric::ublas::c_vector< double, 2 > ( ::AbstractMesh<2, 2>::* )( ::boost::numeric::ublas::c_vector< double, 2 > const &,::boost::numeric::ublas::c_vector< double, 2 > const & ))(&::AbstractMesh< 2, 2 >::GetVectorFromAtoB)
            , (::boost::numeric::ublas::c_vector< double, 2 > ( AbstractMesh_less__2_comma__2__greater__wrapper::* )( ::boost::numeric::ublas::c_vector< double, 2 > const &,::boost::numeric::ublas::c_vector< double, 2 > const & ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetVectorFromAtoB)
            , ( bp::arg("rLocationA"), bp::arg("rLocationB") ) )    
        .def( 
            "GetWidth"
            , (double ( ::AbstractMesh<2, 2>::* )( unsigned int const & )const)(&::AbstractMesh< 2, 2 >::GetWidth)
            , (double ( AbstractMesh_less__2_comma__2__greater__wrapper::* )( unsigned int const & )const)(&AbstractMesh_less__2_comma__2__greater__wrapper::default_GetWidth)
            , ( bp::arg("rDimension") ) )    
        .def( 
            "IsMeshChanging"
            , (bool ( ::AbstractMesh<2, 2>::* )(  )const)( &::AbstractMesh< 2, 2 >::IsMeshChanging ) )    
        .def( 
            "IsMeshOnDisk"
            , (bool ( ::AbstractMesh<2, 2>::* )(  )const)( &::AbstractMesh< 2, 2 >::IsMeshOnDisk ) )    
        .def( 
            "PermuteNodes"
            , (void ( ::AbstractMesh<2, 2>::* )(  ))(&::AbstractMesh< 2, 2 >::PermuteNodes)
            , (void ( AbstractMesh_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_PermuteNodes) )    
        .def( 
            "ReadNodesPerProcessorFile"
            , (void ( ::AbstractMesh<2, 2>::* )( ::std::string const & ))(&::AbstractMesh< 2, 2 >::ReadNodesPerProcessorFile)
            , (void ( AbstractMesh_less__2_comma__2__greater__wrapper::* )( ::std::string const & ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_ReadNodesPerProcessorFile)
            , ( bp::arg("rNodesPerProcessorFile") ) )    
        .def( 
            "RefreshMesh"
            , (void ( ::AbstractMesh<2, 2>::* )(  ))(&::AbstractMesh< 2, 2 >::RefreshMesh)
            , (void ( AbstractMesh_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_RefreshMesh) )    
        .def( 
            "Rotate"
            , (void ( ::AbstractMesh<2, 2>::* )( ::boost::numeric::ublas::c_matrix< double, 2, 2 > ))(&::AbstractMesh< 2, 2 >::Rotate)
            , (void ( AbstractMesh_less__2_comma__2__greater__wrapper::* )( ::boost::numeric::ublas::c_matrix< double, 2, 2 > ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_Rotate)
            , ( bp::arg("rotationMatrix") ) )    
        .def( 
            "Rotate"
            , (void ( ::AbstractMesh<2, 2>::* )( ::boost::numeric::ublas::c_vector< double, 3 >,double ))( &::AbstractMesh< 2, 2 >::Rotate )
            , ( bp::arg("axis"), bp::arg("angle") ) )    
        .def( 
            "Rotate"
            , (void ( ::AbstractMesh<2, 2>::* )( double ))( &::AbstractMesh< 2, 2 >::Rotate )
            , ( bp::arg("theta") ) )    
        .def( 
            "RotateX"
            , (void ( ::AbstractMesh<2, 2>::* )( double const ))( &::AbstractMesh< 2, 2 >::RotateX )
            , ( bp::arg("theta") ) )    
        .def( 
            "RotateY"
            , (void ( ::AbstractMesh<2, 2>::* )( double const ))( &::AbstractMesh< 2, 2 >::RotateY )
            , ( bp::arg("theta") ) )    
        .def( 
            "RotateZ"
            , (void ( ::AbstractMesh<2, 2>::* )( double const ))( &::AbstractMesh< 2, 2 >::RotateZ )
            , ( bp::arg("theta") ) )    
        .def( 
            "Scale"
            , (void ( ::AbstractMesh<2, 2>::* )( double const,double const,double const ))(&::AbstractMesh< 2, 2 >::Scale)
            , (void ( AbstractMesh_less__2_comma__2__greater__wrapper::* )( double const,double const,double const ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_Scale)
            , ( bp::arg("xFactor")=1., bp::arg("yFactor")=1., bp::arg("zFactor")=1. ) )    
        .def( 
            "SetDistributedVectorFactory"
            , (void ( ::AbstractMesh<2, 2>::* )( ::DistributedVectorFactory * ))(&::AbstractMesh< 2, 2 >::SetDistributedVectorFactory)
            , (void ( AbstractMesh_less__2_comma__2__greater__wrapper::* )( ::DistributedVectorFactory * ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_SetDistributedVectorFactory)
            , ( bp::arg("pFactory") ) )    
        .def( 
            "SetElementOwnerships"
            , (void ( AbstractMesh_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_SetElementOwnerships) )    
        .def( 
            "SetMeshHasChangedSinceLoading"
            , (void ( ::AbstractMesh<2, 2>::* )(  ))( &::AbstractMesh< 2, 2 >::SetMeshHasChangedSinceLoading ) )    
        .def( 
            "Translate"
            , (void ( ::AbstractMesh<2, 2>::* )( ::boost::numeric::ublas::c_vector< double, 2 > const & ))(&::AbstractMesh< 2, 2 >::Translate)
            , (void ( AbstractMesh_less__2_comma__2__greater__wrapper::* )( ::boost::numeric::ublas::c_vector< double, 2 > const & ))(&AbstractMesh_less__2_comma__2__greater__wrapper::default_Translate)
            , ( bp::arg("rDisplacement") ) )    
        .def( 
            "Translate"
            , (void ( ::AbstractMesh<2, 2>::* )( double const,double const,double const ))( &::AbstractMesh< 2, 2 >::Translate )
            , ( bp::arg("xMovement")=0., bp::arg("yMovement")=0., bp::arg("zMovement")=0. ) );

}
