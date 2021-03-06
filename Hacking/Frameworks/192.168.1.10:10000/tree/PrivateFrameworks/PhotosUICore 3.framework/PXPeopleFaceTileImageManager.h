/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver> {
    bool  _concurrencyEnabled;
    NSMapTable * _faceTileRequestByRequestID;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    PXLRUMemoryCache * _memoryCache;
    <NSObject> * _memoryWarningObserver;
    NSObject<OS_dispatch_queue> * _requestLookupIsolationQueue;
}

@property (getter=isConcurrencyEnabled, nonatomic) bool concurrencyEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLRUMemoryCache *memoryCache;
@property (nonatomic, retain) <NSObject> *memoryWarningObserver;
@property (readonly) Class superclass;

+ (id)imageTransformQueue;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addRequestResult:(id)arg1 forIdentifier:(id)arg2;
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned long long x2; bool x3; bool x4; })arg2 isLowResResult:(bool*)arg3;
- (void)_cropImage:(id)arg1 cacheResult:(bool)arg2 isDegraded:(bool)arg3 forRequest:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(bool)arg2 completionBlock:(id /* block */)arg3;
- (bool)_doesChange:(id)arg1 containVisibleChangesToPHAssetWithOID:(id)arg2;
- (id)_fetchKeyFaceFromFaceCollection:(id)arg1 error:(id*)arg2;
- (id)_fetchKeyFaceFromPerson:(id)arg1 error:(id*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageFaceRectForFace:(id)arg1;
- (void)_requestFaceTileImageFromFace:(id)arg1 fromPHObject:(id)arg2 faceImageRequest:(id)arg3 cacheResult:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)_startListeningForChanges;
- (void)_stopListeningForChanges;
- (void)cancelRequest:(int)arg1;
- (void)clearMemoryCache;
- (void)dealloc;
- (id)init;
- (void)invalidateCacheForPerson:(id)arg1;
- (bool)isConcurrencyEnabled;
- (id)memoryCache;
- (id)memoryWarningObserver;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 round:(bool)arg4 cacheResult:(bool)arg5 completionBlock:(id /* block */)arg6;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 round:(bool)arg4 completionBlock:(id /* block */)arg5;
- (int)requestFaceTileImageFromFaceCollection:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 round:(bool)arg4 cacheResult:(bool)arg5 boundFaceRect:(bool)arg6 completionBlock:(id /* block */)arg7;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 round:(bool)arg4 cacheResult:(bool)arg5 completionBlock:(id /* block */)arg6;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 round:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)setConcurrencyEnabled:(bool)arg1;
- (void)setMemoryWarningObserver:(id)arg1;

@end
