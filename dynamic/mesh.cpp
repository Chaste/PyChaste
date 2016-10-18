// This file has been generated by Py++.

#include "boost/python.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/set.hpp"

#include "mesh_headers.hpp"

namespace bp = boost::python;

struct PottsMesh_less__3__greater__wrapper : PottsMesh< 3 >, bp::wrapper< PottsMesh< 3 > > {

    PottsMesh_less__3__greater__wrapper(::std::vector< Node<3> * > nodes, ::std::vector< PottsElement<3> * > pottsElements, ::std::vector< std::set< unsigned int > > vonNeumannNeighbouringNodeIndices, ::std::vector< std::set< unsigned int > > mooreNeighbouringNodeIndices )
    : PottsMesh<3>( nodes, pottsElements, vonNeumannNeighbouringNodeIndices, mooreNeighbouringNodeIndices )
      , bp::wrapper< PottsMesh< 3 > >(){
        // constructor
    
    }

    PottsMesh_less__3__greater__wrapper( )
    : PottsMesh<3>( )
      , bp::wrapper< PottsMesh< 3 > >(){
        // null constructor
    
    }

    virtual void Clear(  ) {
        if( bp::override func_Clear = this->get_override( "Clear" ) )
            func_Clear(  );
        else{
            this->PottsMesh< 3 >::Clear(  );
        }
    }
    
    void default_Clear(  ) {
        PottsMesh< 3 >::Clear( );
    }

    virtual ::boost::numeric::ublas::c_vector< double, 3 > GetCentroidOfElement( unsigned int index ) {
        if( bp::override func_GetCentroidOfElement = this->get_override( "GetCentroidOfElement" ) )
            return func_GetCentroidOfElement( index );
        else{
            return this->PottsMesh< 3 >::GetCentroidOfElement( index );
        }
    }
    
    ::boost::numeric::ublas::c_vector< double, 3 > default_GetCentroidOfElement( unsigned int index ) {
        return PottsMesh< 3 >::GetCentroidOfElement( index );
    }

    virtual unsigned int GetNumElements(  ) const  {
        if( bp::override func_GetNumElements = this->get_override( "GetNumElements" ) )
            return func_GetNumElements(  );
        else{
            return this->PottsMesh< 3 >::GetNumElements(  );
        }
    }
    
    unsigned int default_GetNumElements(  ) const  {
        return PottsMesh< 3 >::GetNumElements( );
    }

    virtual unsigned int GetNumNodes(  ) const  {
        if( bp::override func_GetNumNodes = this->get_override( "GetNumNodes" ) )
            return func_GetNumNodes(  );
        else{
            return this->PottsMesh< 3 >::GetNumNodes(  );
        }
    }
    
    unsigned int default_GetNumNodes(  ) const  {
        return PottsMesh< 3 >::GetNumNodes( );
    }

    virtual double GetSurfaceAreaOfElement( unsigned int index ) {
        if( bp::override func_GetSurfaceAreaOfElement = this->get_override( "GetSurfaceAreaOfElement" ) )
            return func_GetSurfaceAreaOfElement( index );
        else{
            return this->PottsMesh< 3 >::GetSurfaceAreaOfElement( index );
        }
    }
    
    double default_GetSurfaceAreaOfElement( unsigned int index ) {
        return PottsMesh< 3 >::GetSurfaceAreaOfElement( index );
    }

    virtual double GetVolumeOfElement( unsigned int index ) {
        if( bp::override func_GetVolumeOfElement = this->get_override( "GetVolumeOfElement" ) )
            return func_GetVolumeOfElement( index );
        else{
            return this->PottsMesh< 3 >::GetVolumeOfElement( index );
        }
    }
    
    double default_GetVolumeOfElement( unsigned int index ) {
        return PottsMesh< 3 >::GetVolumeOfElement( index );
    }

    unsigned int SolveBoundaryElementMapping( unsigned int index ) const {
        return PottsMesh< 3 >::SolveBoundaryElementMapping( index );
    }

    unsigned int SolveElementMapping( unsigned int index ) const {
        return PottsMesh< 3 >::SolveElementMapping( index );
    }

    virtual unsigned int SolveNodeMapping( unsigned int index ) const {
        if( bp::override func_SolveNodeMapping = this->get_override( "SolveNodeMapping" ) )
            return func_SolveNodeMapping( index );
        else{
            return this->PottsMesh< 3 >::SolveNodeMapping( index );
        }
    }
    
    virtual unsigned int default_SolveNodeMapping( unsigned int index ) const {
        return PottsMesh< 3 >::SolveNodeMapping( index );
    }

};

struct SharedPottsMeshGenerator_less__3__greater__wrapper : SharedPottsMeshGenerator< 3 >, bp::wrapper< SharedPottsMeshGenerator< 3 > > {

    SharedPottsMeshGenerator_less__3__greater__wrapper(SharedPottsMeshGenerator<3> const & arg )
    : SharedPottsMeshGenerator<3>( arg )
      , bp::wrapper< SharedPottsMeshGenerator< 3 > >(){
        // copy constructor
        
    }

    SharedPottsMeshGenerator_less__3__greater__wrapper(unsigned int numNodesAcross, unsigned int numElementsAcross, unsigned int elementWidth, unsigned int numNodesUp=1U, unsigned int numElementsUp=1U, unsigned int elementHeight=1U, unsigned int numNodesDeep=1U, unsigned int numElementsDeep=1U, unsigned int elementDepth=1U, bool startAtBottomLeft=false, bool isPeriodicInX=false, bool isPeriodicInY=false, bool isPeriodicInZ=false )
    : SharedPottsMeshGenerator<3>( numNodesAcross, numElementsAcross, elementWidth, numNodesUp, numElementsUp, elementHeight, numNodesDeep, numElementsDeep, elementDepth, startAtBottomLeft, isPeriodicInX, isPeriodicInY, isPeriodicInZ )
      , bp::wrapper< SharedPottsMeshGenerator< 3 > >(){
        // constructor
    
    }

    SharedPottsMeshGenerator_less__3__greater__wrapper( )
    : SharedPottsMeshGenerator<3>( )
      , bp::wrapper< SharedPottsMeshGenerator< 3 > >(){
        // null constructor
    
    }

    virtual ::boost::shared_ptr< PottsMesh< 3 > > GetMesh(  ) {
        if( bp::override func_GetMesh = this->get_override( "GetMesh" ) )
            return func_GetMesh(  );
        else{
            return this->SharedPottsMeshGenerator< 3 >::GetMesh(  );
        }
    }
    
    ::boost::shared_ptr< PottsMesh< 3 > > default_GetMesh(  ) {
        return SharedPottsMeshGenerator< 3 >::GetMesh( );
    }

};

namespace boost { namespace python { namespace indexing {

template<>
struct value_traits< std::set< unsigned int > >{

    static bool const equality_comparable = false;
    

    static bool const less_than_comparable = false;
    

    template<typename PythonClass, typename Policy>
    static void visit_container_class(PythonClass &, Policy const &){
        
    }

};

}/*indexing*/ } /*python*/ } /*boost*/

BOOST_PYTHON_MODULE(_chaste_project_PyChaste_mesh){
    { //::std::vector< std::set< unsigned int > >
        typedef bp::class_< std::vector< std::set< unsigned int > > > __type_exposer_t;
        __type_exposer_t __type_exposer = __type_exposer_t( "__type" );
        bp::scope __type_scope( __type_exposer );
        __type_exposer.def( bp::indexing::vector_suite< std::vector< std::set< unsigned int > > >() );
    }

    { //::std::vector< double >
        typedef bp::class_< std::vector< double > > __type_exposer_t;
        __type_exposer_t __type_exposer = __type_exposer_t( "__type" );
        bp::scope __type_scope( __type_exposer );
        __type_exposer.def( bp::indexing::vector_suite< std::vector< double > >() );
    }

    { //::std::vector< PottsElement<3> * >
        typedef bp::class_< std::vector< PottsElement<3> * > > vector_less__PottsElement_less_3_greater___ptr___greater__exposer_t;
        vector_less__PottsElement_less_3_greater___ptr___greater__exposer_t vector_less__PottsElement_less_3_greater___ptr___greater__exposer = vector_less__PottsElement_less_3_greater___ptr___greater__exposer_t( "vector_less__PottsElement_less_3_greater___ptr___greater_" );
        bp::scope vector_less__PottsElement_less_3_greater___ptr___greater__scope( vector_less__PottsElement_less_3_greater___ptr___greater__exposer );
        vector_less__PottsElement_less_3_greater___ptr___greater__exposer.def( bp::indexing::vector_suite< std::vector< PottsElement<3> * > >::with_policies(bp::return_internal_reference< >()) );
    }

    { //::std::vector< Node<3> * >
        typedef bp::class_< std::vector< Node<3> * > > vector_less__Node_less_3_greater___ptr___greater__exposer_t;
        vector_less__Node_less_3_greater___ptr___greater__exposer_t vector_less__Node_less_3_greater___ptr___greater__exposer = vector_less__Node_less_3_greater___ptr___greater__exposer_t( "vector_less__Node_less_3_greater___ptr___greater_" );
        bp::scope vector_less__Node_less_3_greater___ptr___greater__scope( vector_less__Node_less_3_greater___ptr___greater__exposer );
        vector_less__Node_less_3_greater___ptr___greater__exposer.def( bp::indexing::vector_suite< std::vector< Node<3> * > >::with_policies(bp::return_internal_reference< >()) );
    }

    { //::std::set< unsigned int >
        typedef bp::class_< std::set< unsigned int > > set_less__unsigned_int__greater__exposer_t;
        set_less__unsigned_int__greater__exposer_t set_less__unsigned_int__greater__exposer = set_less__unsigned_int__greater__exposer_t( "set_less__unsigned_int__greater_" );
        bp::scope set_less__unsigned_int__greater__scope( set_less__unsigned_int__greater__exposer );
        set_less__unsigned_int__greater__exposer.def( bp::indexing::set_suite< std::set< unsigned int > >() );
    }

    { //::ChastePoint< 3 >
        typedef bp::class_< ChastePoint< 3 > > ChastePoint3_exposer_t;
        ChastePoint3_exposer_t ChastePoint3_exposer = ChastePoint3_exposer_t( "ChastePoint3", bp::init< bp::optional< double, double, double > >(( bp::arg("v1")=0, bp::arg("v2")=0, bp::arg("v3")=0 )) );
        bp::scope ChastePoint3_scope( ChastePoint3_exposer );
        bp::implicitly_convertible< double, ChastePoint< 3 > >();
        ChastePoint3_exposer.def( bp::init< std::vector< double > >(( bp::arg("coords") )) );
        bp::implicitly_convertible< std::vector< double >, ChastePoint< 3 > >();
        ChastePoint3_exposer.def( bp::init< boost::numeric::ublas::c_vector< double, 3 > >(( bp::arg("location") )) );
        bp::implicitly_convertible< boost::numeric::ublas::c_vector< double, 3 >, ChastePoint< 3 > >();
        { //::ChastePoint< 3 >::GetWithDefault
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef double ( exported_class_t::*GetWithDefault_function_type)( unsigned int,double ) const;
            
            ChastePoint3_exposer.def( 
                "GetWithDefault"
                , GetWithDefault_function_type( &::ChastePoint< 3 >::GetWithDefault )
                , ( bp::arg("i"), bp::arg("def")=0. ) );
        
        }
        { //::ChastePoint< 3 >::IsSamePoint
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef bool ( exported_class_t::*IsSamePoint_function_type)( ::ChastePoint< 3 > const & ) const;
            
            ChastePoint3_exposer.def( 
                "IsSamePoint"
                , IsSamePoint_function_type( &::ChastePoint< 3 >::IsSamePoint )
                , ( bp::arg("rPoint") ) );
        
        }
        { //::ChastePoint< 3 >::SetCoordinate
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef void ( exported_class_t::*SetCoordinate_function_type)( unsigned int,double ) ;
            
            ChastePoint3_exposer.def( 
                "SetCoordinate"
                , SetCoordinate_function_type( &::ChastePoint< 3 >::SetCoordinate )
                , ( bp::arg("i"), bp::arg("value") ) );
        
        }
        { //::ChastePoint< 3 >::operator[]
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef double ( exported_class_t::*__getitem___function_type)( unsigned int ) const;
            
            ChastePoint3_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::ChastePoint< 3 >::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::ChastePoint< 3 >::rGetLocation
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef ::boost::numeric::ublas::c_vector< double, 3 > const & ( exported_class_t::*rGetLocation_function_type)(  ) const;
            
            ChastePoint3_exposer.def( 
                "rGetLocation"
                , rGetLocation_function_type( &::ChastePoint< 3 >::rGetLocation )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
    }

    { //::PottsMesh< 3 >
        typedef bp::class_< PottsMesh_less__3__greater__wrapper, boost::noncopyable > PottsMesh3_exposer_t;
        PottsMesh3_exposer_t PottsMesh3_exposer = PottsMesh3_exposer_t( "PottsMesh3", bp::init< std::vector< Node<3> * >, std::vector< PottsElement<3> * >, std::vector< std::set< unsigned int > >, std::vector< std::set< unsigned int > > >(( bp::arg("nodes"), bp::arg("pottsElements"), bp::arg("vonNeumannNeighbouringNodeIndices"), bp::arg("mooreNeighbouringNodeIndices") )) );
        bp::scope PottsMesh3_scope( PottsMesh3_exposer );
        PottsMesh3_exposer.def( bp::init< >() );
        { //::PottsMesh< 3 >::AddElement
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef unsigned int ( exported_class_t::*AddElement_function_type)( ::PottsElement< 3 > * ) ;
            
            PottsMesh3_exposer.def( 
                "AddElement"
                , AddElement_function_type( &::PottsMesh< 3 >::AddElement )
                , ( bp::arg("pNewElement") ) );
        
        }
        { //::PottsMesh< 3 >::Clear
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef void ( exported_class_t::*Clear_function_type)(  ) ;
            typedef void ( PottsMesh_less__3__greater__wrapper::*default_Clear_function_type)(  ) ;
            
            PottsMesh3_exposer.def( 
                "Clear"
                , Clear_function_type(&::PottsMesh< 3 >::Clear)
                , default_Clear_function_type(&PottsMesh_less__3__greater__wrapper::default_Clear) );
        
        }
        { //::PottsMesh< 3 >::ConstructFromMeshReader
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef void ( exported_class_t::*ConstructFromMeshReader_function_type)( ::AbstractMeshReader< 3, 3 > & ) ;
            
            PottsMesh3_exposer.def( 
                "ConstructFromMeshReader"
                , ConstructFromMeshReader_function_type( &::PottsMesh< 3 >::ConstructFromMeshReader )
                , ( bp::arg("rMeshReader") ) );
        
        }
        { //::PottsMesh< 3 >::DeleteElement
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef void ( exported_class_t::*DeleteElement_function_type)( unsigned int ) ;
            
            PottsMesh3_exposer.def( 
                "DeleteElement"
                , DeleteElement_function_type( &::PottsMesh< 3 >::DeleteElement )
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 3 >::DeleteNode
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef void ( exported_class_t::*DeleteNode_function_type)( unsigned int ) ;
            
            PottsMesh3_exposer.def( 
                "DeleteNode"
                , DeleteNode_function_type( &::PottsMesh< 3 >::DeleteNode )
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 3 >::DivideElement
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef unsigned int ( exported_class_t::*DivideElement_function_type)( ::PottsElement< 3 > *,bool ) ;
            
            PottsMesh3_exposer.def( 
                "DivideElement"
                , DivideElement_function_type( &::PottsMesh< 3 >::DivideElement )
                , ( bp::arg("pElement"), bp::arg("placeOriginalElementBelow")=(bool)(false) ) );
        
        }
        { //::PottsMesh< 3 >::GetCentroidOfElement
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef ::boost::numeric::ublas::c_vector< double, 3 > ( exported_class_t::*GetCentroidOfElement_function_type)( unsigned int ) ;
            typedef ::boost::numeric::ublas::c_vector< double, 3 > ( PottsMesh_less__3__greater__wrapper::*default_GetCentroidOfElement_function_type)( unsigned int ) ;
            
            PottsMesh3_exposer.def( 
                "GetCentroidOfElement"
                , GetCentroidOfElement_function_type(&::PottsMesh< 3 >::GetCentroidOfElement)
                , default_GetCentroidOfElement_function_type(&PottsMesh_less__3__greater__wrapper::default_GetCentroidOfElement)
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 3 >::GetElementIteratorBegin
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef ::PottsMesh< 3 >::PottsElementIterator ( exported_class_t::*GetElementIteratorBegin_function_type)( bool ) ;
            
            PottsMesh3_exposer.def( 
                "GetElementIteratorBegin"
                , GetElementIteratorBegin_function_type( &::PottsMesh< 3 >::GetElementIteratorBegin )
                , ( bp::arg("skipDeletedElements")=(bool)(true) ) );
        
        }
        { //::PottsMesh< 3 >::GetElementIteratorEnd
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef ::PottsMesh< 3 >::PottsElementIterator ( exported_class_t::*GetElementIteratorEnd_function_type)(  ) ;
            
            PottsMesh3_exposer.def( 
                "GetElementIteratorEnd"
                , GetElementIteratorEnd_function_type( &::PottsMesh< 3 >::GetElementIteratorEnd ) );
        
        }
        { //::PottsMesh< 3 >::GetMooreNeighbouringNodeIndices
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef ::std::set< unsigned int > ( exported_class_t::*GetMooreNeighbouringNodeIndices_function_type)( unsigned int ) ;
            
            PottsMesh3_exposer.def( 
                "GetMooreNeighbouringNodeIndices"
                , GetMooreNeighbouringNodeIndices_function_type( &::PottsMesh< 3 >::GetMooreNeighbouringNodeIndices )
                , ( bp::arg("nodeIndex") ) );
        
        }
        { //::PottsMesh< 3 >::GetNeighbouringElementIndices
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef ::std::set< unsigned int > ( exported_class_t::*GetNeighbouringElementIndices_function_type)( unsigned int ) ;
            
            PottsMesh3_exposer.def( 
                "GetNeighbouringElementIndices"
                , GetNeighbouringElementIndices_function_type( &::PottsMesh< 3 >::GetNeighbouringElementIndices )
                , ( bp::arg("elementIndex") ) );
        
        }
        { //::PottsMesh< 3 >::GetNumAllElements
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumAllElements_function_type)(  ) const;
            
            PottsMesh3_exposer.def( 
                "GetNumAllElements"
                , GetNumAllElements_function_type( &::PottsMesh< 3 >::GetNumAllElements ) );
        
        }
        { //::PottsMesh< 3 >::GetNumElements
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumElements_function_type)(  ) const;
            typedef unsigned int ( PottsMesh_less__3__greater__wrapper::*default_GetNumElements_function_type)(  ) const;
            
            PottsMesh3_exposer.def( 
                "GetNumElements"
                , GetNumElements_function_type(&::PottsMesh< 3 >::GetNumElements)
                , default_GetNumElements_function_type(&PottsMesh_less__3__greater__wrapper::default_GetNumElements) );
        
        }
        { //::PottsMesh< 3 >::GetNumNodes
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef unsigned int ( exported_class_t::*GetNumNodes_function_type)(  ) const;
            typedef unsigned int ( PottsMesh_less__3__greater__wrapper::*default_GetNumNodes_function_type)(  ) const;
            
            PottsMesh3_exposer.def( 
                "GetNumNodes"
                , GetNumNodes_function_type(&::PottsMesh< 3 >::GetNumNodes)
                , default_GetNumNodes_function_type(&PottsMesh_less__3__greater__wrapper::default_GetNumNodes) );
        
        }
        { //::PottsMesh< 3 >::GetSurfaceAreaOfElement
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef double ( exported_class_t::*GetSurfaceAreaOfElement_function_type)( unsigned int ) ;
            typedef double ( PottsMesh_less__3__greater__wrapper::*default_GetSurfaceAreaOfElement_function_type)( unsigned int ) ;
            
            PottsMesh3_exposer.def( 
                "GetSurfaceAreaOfElement"
                , GetSurfaceAreaOfElement_function_type(&::PottsMesh< 3 >::GetSurfaceAreaOfElement)
                , default_GetSurfaceAreaOfElement_function_type(&PottsMesh_less__3__greater__wrapper::default_GetSurfaceAreaOfElement)
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 3 >::GetVolumeOfElement
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef double ( exported_class_t::*GetVolumeOfElement_function_type)( unsigned int ) ;
            typedef double ( PottsMesh_less__3__greater__wrapper::*default_GetVolumeOfElement_function_type)( unsigned int ) ;
            
            PottsMesh3_exposer.def( 
                "GetVolumeOfElement"
                , GetVolumeOfElement_function_type(&::PottsMesh< 3 >::GetVolumeOfElement)
                , default_GetVolumeOfElement_function_type(&PottsMesh_less__3__greater__wrapper::default_GetVolumeOfElement)
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 3 >::GetVonNeumannNeighbouringNodeIndices
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef ::std::set< unsigned int > ( exported_class_t::*GetVonNeumannNeighbouringNodeIndices_function_type)( unsigned int ) ;
            
            PottsMesh3_exposer.def( 
                "GetVonNeumannNeighbouringNodeIndices"
                , GetVonNeumannNeighbouringNodeIndices_function_type( &::PottsMesh< 3 >::GetVonNeumannNeighbouringNodeIndices )
                , ( bp::arg("nodeIndex") ) );
        
        }
        { //::PottsMesh< 3 >::RemoveDeletedElements
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef void ( exported_class_t::*RemoveDeletedElements_function_type)(  ) ;
            
            PottsMesh3_exposer.def( 
                "RemoveDeletedElements"
                , RemoveDeletedElements_function_type( &::PottsMesh< 3 >::RemoveDeletedElements ) );
        
        }
        { //::PottsMesh< 3 >::SolveBoundaryElementMapping
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef unsigned int ( PottsMesh_less__3__greater__wrapper::*SolveBoundaryElementMapping_function_type)( unsigned int ) const;
            
            PottsMesh3_exposer.def( 
                "SolveBoundaryElementMapping"
                , SolveBoundaryElementMapping_function_type( &PottsMesh_less__3__greater__wrapper::SolveBoundaryElementMapping )
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 3 >::SolveElementMapping
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef unsigned int ( PottsMesh_less__3__greater__wrapper::*SolveElementMapping_function_type)( unsigned int ) const;
            
            PottsMesh3_exposer.def( 
                "SolveElementMapping"
                , SolveElementMapping_function_type( &PottsMesh_less__3__greater__wrapper::SolveElementMapping )
                , ( bp::arg("index") ) );
        
        }
        { //::PottsMesh< 3 >::SolveNodeMapping
        
            typedef PottsMesh< 3 > exported_class_t;
            typedef unsigned int ( PottsMesh_less__3__greater__wrapper::*SolveNodeMapping_function_type)( unsigned int ) const;
            
            PottsMesh3_exposer.def( 
                "SolveNodeMapping"
                , SolveNodeMapping_function_type( &PottsMesh_less__3__greater__wrapper::default_SolveNodeMapping )
                , ( bp::arg("index") ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< PottsMesh<3> > >();
        bp::implicitly_convertible< boost::shared_ptr< PottsMesh< 3 > >, boost::shared_ptr< AbstractMesh< 3, 3 > > >();
    }

    bp::class_< SharedPottsMeshGenerator_less__3__greater__wrapper >( "PottsMeshGenerator3", bp::init< unsigned int, unsigned int, unsigned int, bp::optional< unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, bool, bool, bool > >(( bp::arg("numNodesAcross"), bp::arg("numElementsAcross"), bp::arg("elementWidth"), bp::arg("numNodesUp")=(unsigned int)(1U), bp::arg("numElementsUp")=(unsigned int)(1U), bp::arg("elementHeight")=(unsigned int)(1U), bp::arg("numNodesDeep")=(unsigned int)(1U), bp::arg("numElementsDeep")=(unsigned int)(1U), bp::arg("elementDepth")=(unsigned int)(1U), bp::arg("startAtBottomLeft")=(bool)(false), bp::arg("isPeriodicInX")=(bool)(false), bp::arg("isPeriodicInY")=(bool)(false), bp::arg("isPeriodicInZ")=(bool)(false) )) )    
        .def( bp::init< >() )    
        .def( 
            "GetMesh"
            , (::boost::shared_ptr< PottsMesh< 3 > > ( ::SharedPottsMeshGenerator<3>::* )(  ))(&::SharedPottsMeshGenerator< 3 >::GetMesh)
            , (::boost::shared_ptr< PottsMesh< 3 > > ( SharedPottsMeshGenerator_less__3__greater__wrapper::* )(  ))(&SharedPottsMeshGenerator_less__3__greater__wrapper::default_GetMesh) );

    { //::Instantiation
    
        typedef int ( *Instantiation_function_type )(  );
        
        bp::def( 
            "Instantiation"
            , Instantiation_function_type( &::Instantiation ) );
    
    }
}