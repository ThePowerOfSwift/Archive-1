/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOBatchPopularNearbyTicket : NSObject <GEOMapServiceBatchNearbyTicket> {
    bool  _canceled;
    NSArray * _categories;
    GEOPDPlaceRequest * _request;
    GEOPDPlaceResponse * _response;
    GEOMapServiceTraits * _traits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 categories:(id)arg3;
- (id)resultSectionHeaderForCategory:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (id)traits;

@end
