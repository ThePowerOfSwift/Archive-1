/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemItem : SKUIItem {
    <SKUIArtworkProviding> * _artworks;
}

@property (nonatomic, retain) <SKUIArtworkProviding> *artworks;
@property (nonatomic) long long itemIdentifier;
@property (nonatomic) long long itemKind;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ageBandRange;
- (id)artworkURLForSize:(long long)arg1;
- (id)artworks;
- (id)largestArtworkURL;
- (void)setArtworks:(id)arg1;

@end