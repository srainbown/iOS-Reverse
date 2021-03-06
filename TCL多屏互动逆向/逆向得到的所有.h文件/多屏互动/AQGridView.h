//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class AQGridViewData, NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSSet, UIColor, UIView;

@interface AQGridView : UIScrollView
{
    id <AQGridViewDataSource> _dataSource;
    AQGridViewData *_gridData;
    NSMutableArray *_updateInfoStack;
    int _animationCount;
    struct CGRect _visibleBounds;
    struct _NSRange _visibleIndices;
    NSMutableArray *_visibleCells;
    NSMutableDictionary *_reusableGridCells;
    NSSet *_animatingCells;
    NSIndexSet *_animatingIndices;
    NSMutableIndexSet *_highlightedIndices;
    UIView *_touchedContentView;
    UIView *_backgroundView;
    UIColor *_separatorColor;
    int _reloadingSuspendedCount;
    int _displaySuspendedCount;
    int _updateCount;
    unsigned int _selectedIndex;
    unsigned int _pendingSelectionIndex;
    struct CGPoint _touchBeganPosition;
    UIView *_headerView;
    UIView *_footerView;
    struct {
        unsigned int resizesCellWidths:1;
        unsigned int numColumns:6;
        unsigned int separatorStyle:3;
        unsigned int allowsSelection:1;
        unsigned int usesPagedHorizontalScrolling:1;
        unsigned int updating:1;
        unsigned int ignoreTouchSelect:1;
        unsigned int needsReload:1;
        unsigned int allCellsNeedLayout:1;
        unsigned int isRotating:1;
        unsigned int clipsContentWidthToBounds:1;
        unsigned int isAnimatingUpdates:1;
        unsigned int requiresSelection:1;
        unsigned int contentSizeFillsBounds:1;
        unsigned int delegateWillDisplayCell:1;
        unsigned int delegateWillSelectItem:1;
        unsigned int delegateWillDeselectItem:1;
        unsigned int delegateDidSelectItem:1;
        unsigned int delegateDidDeselectItem:1;
        unsigned int delegateGestureRecognizerActivated:1;
        unsigned int delegateAdjustGridCellFrame:1;
        unsigned int dataSourceGridCellSize:1;
        unsigned int __RESERVED__:1;
    } _flags;
}

@property(copy, nonatomic) NSIndexSet *animatingIndices; // @synthesize animatingIndices=_animatingIndices;
@property(copy, nonatomic) NSSet *animatingCells; // @synthesize animatingCells=_animatingCells;
@property(nonatomic) id <AQGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_gestureRecognizerIsHandlingTouches:(id)arg1;
- (void)_userSelectItemAtIndex:(id)arg1;
- (void)_gridViewDeferredTouchesBegan:(id)arg1;
- (BOOL)_canSelectItemContainingHitView:(id)arg1;
- (id)_basicHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)deselectItemAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)selectItemAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3;
- (void)_selectItemAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3 notifyDelegate:(BOOL)arg4;
- (void)_deselectItemAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)unhighlightItemAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)highlightItemAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3;
- (unsigned int)indexOfSelectedItem;
- (void)moveItemAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 withAnimation:(int)arg3;
- (void)reloadItemsAtIndices:(id)arg1 withAnimation:(int)arg2;
- (void)deleteItemsAtIndices:(id)arg1 withAnimation:(int)arg2;
- (void)insertItemsAtIndices:(id)arg1 withAnimation:(int)arg2;
- (void)_updateItemsAtIndices:(id)arg1 updateAction:(int)arg2 withAnimation:(int)arg3;
- (void)endUpdates;
- (void)beginUpdates;
- (void)cellUpdateAnimationStopped:(id)arg1 finished:(BOOL)arg2 context:(void *)arg3;
- (void)endUpdateAnimations;
- (void)setupUpdateAnimations;
- (void)fixCellsFromAnimation;
- (BOOL)isRectVisible:(struct CGRect)arg1;
- (void)scrollToItemAtIndex:(unsigned int)arg1 atScrollPosition:(int)arg2 animated:(BOOL)arg3;
- (id)visibleCellIndices;
- (id)visibleCells;
- (id)cellForItemAtPoint:(struct CGPoint)arg1;
- (unsigned int)indexForCell:(id)arg1;
- (unsigned int)indexForItemAtPoint:(struct CGPoint)arg1;
- (id)cellForItemAtIndex:(unsigned int)arg1;
- (struct CGRect)rectForItemAtIndex:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (struct CGRect)gridViewVisibleBounds;
- (void)enqueueReusableCells:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)handleGridViewBoundsChanged:(struct CGRect)arg1 toNewBounds:(struct CGRect)arg2;
- (void)updateContentRectWithOldMaxLocation:(struct CGPoint)arg1 gridSize:(struct CGSize)arg2;
@property(readonly, nonatomic) BOOL isAnimatingUpdates;
@property(nonatomic) BOOL contentSizeGrowsToFillBounds;
@property(retain, nonatomic) UIView *gridFooterView;
@property(retain, nonatomic) UIView *gridHeaderView;
@property(readonly, nonatomic) struct CGSize gridCellSize;
@property(nonatomic) float rightContentInset;
@property(nonatomic) float leftContentInset;
@property(nonatomic) int separatorStyle;
@property(nonatomic) BOOL usesPagedHorizontalScrolling;
@property(nonatomic) BOOL clipsContentWidthToBounds;
@property(nonatomic) BOOL resizesCellWidthToFit;
@property(nonatomic) BOOL requiresSelection;
@property(nonatomic) BOOL allowsSelection;
@property(readonly, nonatomic) unsigned int numberOfRows;
@property(readonly, nonatomic) unsigned int numberOfColumns;
@property(readonly, nonatomic) unsigned int numberOfItems;
@property(nonatomic) int layoutDirection;
@property(nonatomic) id <AQGridViewDelegate> delegate;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_sharedGridViewInit;
- (unsigned int)visibleCellListIndexForItemIndex:(unsigned int)arg1;
- (void)ensureCellInVisibleList:(id)arg1;
- (void)deleteVisibleCell:(id)arg1 atIndex:(unsigned int)arg2 appendingNewCell:(id)arg3;
- (void)insertVisibleCell:(id)arg1 atIndex:(unsigned int)arg2;
- (id)createPreparedCellForIndex:(unsigned int)arg1;
- (id)createPreparedCellForIndex:(unsigned int)arg1 usingGridData:(id)arg2;
- (struct CGRect)fixCellFrame:(struct CGRect)arg1 forGridRect:(struct CGRect)arg2;
- (void)layoutAllCells;
- (void)layoutCellsInVisibleCellRange:(struct _NSRange)arg1;
- (void)updateVisibleGridCellsNow;
- (void)updateGridViewBoundsForNewGridData:(id)arg1;
- (void)sortVisibleCellList;
- (void)viewDidRotate;
- (void)viewWillRotateToInterfaceOrientation:(int)arg1;
- (void)delegateWillDisplayCell:(id)arg1 atIndex:(unsigned int)arg2;

@end

