//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, WKVideoDetailModel;

@interface WKVideoSourceCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    WKVideoDetailModel *_detailModel;
    id <WKVideoSourceCollectionViewDelegate> _sourceDelegate;
}

@property(nonatomic) __weak id <WKVideoSourceCollectionViewDelegate> sourceDelegate; // @synthesize sourceDelegate=_sourceDelegate;
- (void).cxx_destruct;
- (long long)currentVideoSourceIndex;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)setVideoSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

