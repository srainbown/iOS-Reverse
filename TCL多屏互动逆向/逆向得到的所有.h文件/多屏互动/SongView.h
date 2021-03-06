//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PullToRefreshTableView.h"

#import "CustomIOS7AlertViewDelegate.h"
#import "GoToController.h"
#import "MVLCMovieViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class CustomIOS7AlertView, FMDatabase, NSMutableArray, NSString, PlayList, SongEntity, UIAlertView;

@interface SongView : PullToRefreshTableView <UIAlertViewDelegate, MVLCMovieViewDelegate, GoToController, CustomIOS7AlertViewDelegate>
{
    NSMutableArray *_songEntityList;
    int curSongIndex;
    NSString *_searchName;
    UIAlertView *alertList;
    CustomIOS7AlertView *alertView;
    BOOL insertSuccess;
    BOOL requestSuccess;
    BOOL isPhone;
    BOOL sortSingerBool;
    NSString *singerNameStr;
    BOOL isAddList;
    FMDatabase *db;
    BOOL _isSearch;
    SongEntity *song;
    NSMutableArray *_aryListName;
    NSMutableArray *_aryListName2;
    PlayList *_pl;
}

@property(retain, nonatomic) PlayList *pl; // @synthesize pl=_pl;
@property(nonatomic) BOOL isSearch; // @synthesize isSearch=_isSearch;
@property(retain, nonatomic) NSMutableArray *aryListName2; // @synthesize aryListName2=_aryListName2;
@property(retain, nonatomic) NSMutableArray *aryListName; // @synthesize aryListName=_aryListName;
@property(retain, nonatomic) NSString *singerNameStr; // @synthesize singerNameStr;
@property BOOL sortSingerBool; // @synthesize sortSingerBool;
@property(retain, nonatomic) SongEntity *song; // @synthesize song;
@property(retain, nonatomic) NSString *searchName; // @synthesize searchName=_searchName;
@property(retain, nonatomic) NSMutableArray *songEntityList; // @synthesize songEntityList=_songEntityList;
- (void)parseSingerSongList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)goToController;
- (void)ShareToTvPlay;
- (void)insertDataBaseByListName:(id)arg1:(id)arg2;
- (void)insertDataBase:(id)arg1:(id)arg2;
- (void)requestUrl;
- (void)shareTo_TV_Play:(id)arg1;
- (void)parseSongURL:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)parseBangDangDataList:(id)arg1;
- (void)showSystemErrMsg:(id)arg1;
- (void)parseDateSongList:(id)arg1;
- (void)loadTable;
- (id)getRN;
- (int)getPageNum;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showOptionsList:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct CGRect)getSingerLabRect;
- (struct CGRect)getnameLabRect;
- (struct CGRect)getNumLabRect;
- (void)createLab:(struct CGRect)arg1 withTag:(int)arg2 withLab:(id)arg3;
- (void)getListArray;
- (id)initWithFrame:(struct CGRect)arg1 withDataList:(id)arg2 withSearchName:(id)arg3;
- (void)dealloc;

@end

