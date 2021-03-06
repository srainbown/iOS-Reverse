//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"

@class AppViewCell, NSArray, NSMutableArray, NSString, NSTimer, UIAlertView, UICollectionView, WKSheetView;

@interface LaunchViewController : BaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *appView;
    NSArray *_whiteListArr;
    NSArray *_blackListArr;
    NSArray *_recommendListArr;
    NSMutableArray *_appDataArray;
    NSMutableArray *_systemAppArr;
    NSMutableArray *_hiddenAppArr;
    long long _sectionCount;
    UIAlertView *_longPressAlertView;
    NSTimer *_cellTimer;
    AppViewCell *_currentCellView;
    NSArray *_originalAppArray;
    NSArray *_todayExtensionAppArray;
    NSArray *_topFeatureItemArr;
    NSMutableArray *_featureItemArr;
    WKSheetView *_sheetView;
}

@property(retain, nonatomic) WKSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) NSMutableArray *featureItemArr; // @synthesize featureItemArr=_featureItemArr;
@property(retain, nonatomic) NSArray *topFeatureItemArr; // @synthesize topFeatureItemArr=_topFeatureItemArr;
@property(retain, nonatomic) NSArray *todayExtensionAppArray; // @synthesize todayExtensionAppArray=_todayExtensionAppArray;
@property(retain, nonatomic) NSArray *originalAppArray; // @synthesize originalAppArray=_originalAppArray;
@property(retain, nonatomic) AppViewCell *currentCellView; // @synthesize currentCellView=_currentCellView;
@property(retain, nonatomic) NSTimer *cellTimer; // @synthesize cellTimer=_cellTimer;
@property(retain, nonatomic) UIAlertView *longPressAlertView; // @synthesize longPressAlertView=_longPressAlertView;
@property(nonatomic) long long sectionCount; // @synthesize sectionCount=_sectionCount;
@property(retain, nonatomic) NSMutableArray *hiddenAppArr; // @synthesize hiddenAppArr=_hiddenAppArr;
@property(retain, nonatomic) NSMutableArray *systemAppArr; // @synthesize systemAppArr=_systemAppArr;
@property(retain, nonatomic) NSMutableArray *appDataArray; // @synthesize appDataArray=_appDataArray;
@property(retain, nonatomic) NSArray *recommendListArr; // @synthesize recommendListArr=_recommendListArr;
@property(retain, nonatomic) NSArray *blackListArr; // @synthesize blackListArr=_blackListArr;
@property(retain, nonatomic) NSArray *whiteListArr; // @synthesize whiteListArr=_whiteListArr;
@property(retain, nonatomic) UICollectionView *appView; // @synthesize appView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addSearchItems;
- (void)openAppFolder:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)cellTimeout:(id *)arg1;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupChildLock;
- (void)sendChildLock:(long long)arg1;
- (void)openTVSetting;
- (void)removeHiddenApp:(id)arg1;
- (void)addHiddenApp:(id)arg1;
- (void)deletaUpAppByAppData:(id)arg1;
- (void)addUpAppByAppData:(id)arg1;
- (id)disposeAlertTitleArray:(id)arg1;
- (void)disposeHandLongPressAction:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)mergeAppListWithWhiteAndBlack;
- (void)getRecommendAppList;
- (void)getWhiteList;
- (void)didClickedFeatureBtn:(id)arg1;
- (void)serverApplistArrived:(id)arg1;
- (void)onNetWrokChange:(id)arg1;
- (void)initAppCollectionView;
- (void)initTopView;
- (void)buildUI;
- (void)initHelpView;
- (void)onAppFolderHandLongPress:(id)arg1;
- (void)getInstallApplist;
- (void)deviceChanged:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

