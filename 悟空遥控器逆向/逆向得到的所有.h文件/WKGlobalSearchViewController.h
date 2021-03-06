//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"
#import "WKGlobalSearchRecommendTableViewDelegate.h"
#import "WKGlobalSearchTipsTableViewDelegate.h"
#import "WKWebPageViewDeleagete.h"

@class NSArray, NSString, UISearchBar, WKGlobalSearchRecommendTableModel, WKGlobalSearchRecommendTableView, WKGlobalSearchResultView, WKGlobalSearchTipsTableView, WKNoResultView;

@interface WKGlobalSearchViewController : WKBaseSubViewController <UITextFieldDelegate, WKGlobalSearchTipsTableViewDelegate, WKGlobalSearchRecommendTableViewDelegate, WKWebPageViewDeleagete, UISearchBarDelegate>
{
    WKGlobalSearchRecommendTableView *_recommendTableView;
    NSArray *_searchResultArray;
    NSArray *_tipsArray;
    WKGlobalSearchRecommendTableModel *recommendModel;
    WKGlobalSearchTipsTableView *tipsTableView;
    WKGlobalSearchResultView *resultResultView;
    WKNoResultView *videoNoDataView;
    UISearchBar *_searchBar;
}

@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WKNoResultView *videoNoDataView; // @synthesize videoNoDataView;
@property(retain, nonatomic) WKGlobalSearchResultView *resultResultView; // @synthesize resultResultView;
@property(retain, nonatomic) WKGlobalSearchTipsTableView *tipsTableView; // @synthesize tipsTableView;
@property(retain, nonatomic) WKGlobalSearchRecommendTableModel *recommendModel; // @synthesize recommendModel;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)subTableBeginDragging;
- (void)onGlobalSearchTipsTableViewDelegate:(unsigned long long)arg1;
- (id)getAllSearchHistory;
- (id)clearGarbageModel:(id)arg1;
- (void)reqSearchRecommendData;
- (void)requestHotKey:(id)arg1 withSearchType:(id)arg2;
- (void)requestKeyFromExternal:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onGlobalSearchRecommendTableViewCellSelectRowRequestType:(id)arg1 index:(unsigned long long)arg2;
- (void)setsSearchText:(id)arg1;
- (void)onGlobalSearchRecommendTableViewDelegate:(long long)arg1;
- (void)initRecommendTableView;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)getMoreSearchVideoResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

