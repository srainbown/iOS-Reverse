//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WKNavigationControllerDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, NSTimer, UIImageView, UILabel, UITableView, UITableViewCell, UIView;

@interface WKCleanTVViewController : WKBaseSubViewController <UITableViewDelegate, UITableViewDataSource, WKNavigationControllerDelegate>
{
    _Bool _isCleaned;
    NSLayoutConstraint *_containterViewH;
    NSLayoutConstraint *_scanStripImgTop;
    UIImageView *_scanStripImgV;
    UIImageView *_scanSuccessImgV;
    UILabel *_scanTipLbl;
    double _containerViewHeight;
    UITableView *_tvMain;
    UITableViewCell *_uninstallAppCell;
    UIView *_uninstallCellView;
    NSTimer *_timer;
    NSMutableArray *_cacheArr;
    NSMutableArray *_dataArr;
    long long _numRow;
    double _totalCacheSize;
}

@property(nonatomic) _Bool isCleaned; // @synthesize isCleaned=_isCleaned;
@property double totalCacheSize; // @synthesize totalCacheSize=_totalCacheSize;
@property(nonatomic) long long numRow; // @synthesize numRow=_numRow;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) NSMutableArray *cacheArr; // @synthesize cacheArr=_cacheArr;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak UIView *uninstallCellView; // @synthesize uninstallCellView=_uninstallCellView;
@property(retain, nonatomic) UITableViewCell *uninstallAppCell; // @synthesize uninstallAppCell=_uninstallAppCell;
@property(nonatomic) __weak UITableView *tvMain; // @synthesize tvMain=_tvMain;
@property(nonatomic) double containerViewHeight; // @synthesize containerViewHeight=_containerViewHeight;
@property(nonatomic) __weak UILabel *scanTipLbl; // @synthesize scanTipLbl=_scanTipLbl;
@property(nonatomic) __weak UIImageView *scanSuccessImgV; // @synthesize scanSuccessImgV=_scanSuccessImgV;
@property(nonatomic) __weak UIImageView *scanStripImgV; // @synthesize scanStripImgV=_scanStripImgV;
@property(nonatomic) __weak NSLayoutConstraint *scanStripImgTop; // @synthesize scanStripImgTop=_scanStripImgTop;
@property(nonatomic) __weak NSLayoutConstraint *containterViewH; // @synthesize containterViewH=_containterViewH;
- (void).cxx_destruct;
- (long long)getFilePathType:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshAfterCleaned;
- (void)updateItem:(long long)arg1 size:(int)arg2;
- (void)addCacheItem;
- (void)cacheMemory:(id)arg1;
- (void)forceShowSuccess;
- (void)cacheCleaned:(id)arg1;
- (void)scanComplete:(id)arg1;
- (void)cleaning:(id)arg1;
- (void)startClearCache;
- (void)addNOtify;
- (void)startAnimation;
- (void)loadData;
- (void)buildUI;
- (void)dealloc;
- (void)hideBottomLine;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

