/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineOverlay : NSObject <GEOComposedRouteObserver, VKOverlay> {
    GEOComposedRoute * _composedRoute;
    bool  _isReadyForSnapping;
    struct LabelExternalObjectsModerator { struct fast_shared_ptr<md::unsynchronized_weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_3_1_1; } x3; } * _labelExternalObjectsModerator;
    struct __CFSet { } * _observers;
    VKRouteLine * _routeRibbon;
    <VKPolylineOverlayRouteRibbonObserver> * _routeRibbonObserver;
    struct TrafficSegmentsAlongRoute { struct vector<md::TrafficSegment, std::__1::allocator<md::TrafficSegment> > { struct TrafficSegment {} *x_1_1_1; struct TrafficSegment {} *x_1_1_2; struct __compressed_pair<md::TrafficSegment *, std::__1::allocator<md::TrafficSegment> > { struct TrafficSegment {} *x_3_2_1; } x_1_1_3; } x1; } * _trafficSegments;
    double  _trafficTimeStamp;
}

@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) GEOComposedRoute *composedRoute;
@property (nonatomic, readonly) bool containsTransit;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct LabelExternalObjectsModerator { struct fast_shared_ptr<md::unsynchronized_weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; /* Warning: unhandled struct encoding: '{unordered_set<unsigned long long' */ struct x3; }*labelExternalObjectsModerator; /* unknown property attribute:  true> >=f}}}} */
@property (nonatomic) VKRouteLine *routeRibbon;
@property (nonatomic) <VKPolylineOverlayRouteRibbonObserver> *routeRibbonObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double trafficTimeStamp;

- (void)_setNeedsLayout;
- (void)_updateTraffic;
- (void)addObserver:(id)arg1;
- (id)boundingMapRegion;
- (void)clearSnappedPathsForPainter:(id)arg1;
- (id)composedRoute;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredLeg:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;
- (void)composedRouteUpdatedTraffic:(id)arg1;
- (bool)containsTransit;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)getPathsForPainter:(id)arg1 renderRegion:(id)arg2 shouldSnapToRoads:(bool)arg3 verifySnapping:(bool)arg4 snappingCompletionHandler:(id /* block */)arg5;
- (id)initWithComposedRoute:(id)arg1;
- (bool)isSnappingForSceneTiles;
- (struct LabelExternalObjectsModerator { struct fast_shared_ptr<md::unsynchronized_weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_3_1_1; } x3; }*)labelExternalObjectsModerator;
- (void)removeObserver:(id)arg1;
- (id)routeRibbon;
- (id)routeRibbonObserver;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sectionRangeForBounds:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })arg1;
- (void)setLabelExternalObjectsModerator:(struct LabelExternalObjectsModerator { struct fast_shared_ptr<md::unsynchronized_weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_3_1_1; } x3; }*)arg1;
- (void)setRouteRibbon:(id)arg1;
- (void)setRouteRibbonObserver:(id)arg1;
- (double)trafficTimeStamp;

@end