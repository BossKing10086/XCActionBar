//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class DVTFilePath, DVTHashTable, DVTMapTable, DVTObservingToken, DVTStackBacktrace;
@class IDEActivityLogSection, IDEBatchFindManager, IDEBreakpointManager, IDEConcreteClientTracker, IDEContainer;
@class IDEContainerQuery, IDEDeviceInstallWorkspaceMonitor, IDEExecutionEnvironment, IDEIndex, IDEIssueManager;
@class IDELocalizationManager, IDELogManager, IDERefactoring, IDERunContextManager, IDESourceControlWorkspaceMonitor;
@class IDETestManager, IDETextIndex, IDEWorkspaceArena, IDEWorkspaceSharedSettings, IDEWorkspaceSnapshotManager, IDEWorkspaceUpgradeTasksController;
@class IDEWorkspaceUserSettings, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSSet, NSString;
@class IDETestManager;

@interface IDEWorkspace : NSObject
{
}

+ (BOOL)_shouldTrackReadOnlyStatus;
+ (id)keyPathsForValuesAffectingRepresentingCustomDataStore;
+ (id)keyPathsForValuesAffectingHostOnlyXcode3Project;
+ (id)keyPathsForValuesAffectingRepresentingTitle;
+ (id)keyPathsForValuesAffectingRepresentingFilePath;
+ (id)keyPathsForValuesAffectingName;
+ (id)_workspaceFileExtension;
+ (id)containerTypeDisplayName;
+ (id)containerFileDataType;
+ (id)xmlArchiveFileName;
+ (id)rootElementName;
+ (id)_wrappedWorkspacePathForProjectPath:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfWrappedXcode3ProjectPath;
+ (BOOL)_shouldLoadUISubsystems;
+ (BOOL)automaticallyNotifiesObserversOfFileRefsWithContainerLoadingIssues;
+ (void)initialize;
//@property(retain) IDEWorkspaceUpgradeTasksController *deferredUpgradeTasksController; // @synthesize deferredUpgradeTasksController=_deferredUpgradeTasksController;
//@property(retain) id <IDEActiveRunContextStoring> activeRunContextStore; // @synthesize activeRunContextStore=_activeRunContextStore;
@property(nonatomic) BOOL isPotentiallyClosing; // @synthesize isPotentiallyClosing=_isPotentiallyClosing;
@property(readonly, nonatomic) BOOL postLoadingPerformanceMetricsAllowed; // @synthesize postLoadingPerformanceMetricsAllowed=_postLoadingPerformanceMetricsAllowed;
//@property(retain, nonatomic) IDEWorkspaceSharedSettings *sharedSettings; // @synthesize sharedSettings=_sharedSettings;
//@property(retain, nonatomic) IDEWorkspaceUserSettings *userSettings; // @synthesize userSettings=_userSettings;
//@property(retain, nonatomic) id <IDEContinuousIntegrationBotMonitor> xcs2WorkspaceBotMonitor; // @synthesize xcs2WorkspaceBotMonitor=_xcs2WorkspaceBotMonitor;
@property(readonly, nonatomic) long long indexGenerationCounter; // @synthesize indexGenerationCounter=_indexGenerationCounter;
@property BOOL isCleaningBuildFolder; // @synthesize isCleaningBuildFolder=_isCleaningBuildFolder;
//@property(readonly) IDETextIndex *textIndex; // @synthesize textIndex=_textIndex;
@property(nonatomic) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(nonatomic) BOOL pendingFileReferencesAndContainers; // @synthesize pendingFileReferencesAndContainers=_pendingFileReferencesAndContainers;
@property BOOL initialContainerScanComplete; // @synthesize initialContainerScanComplete=_initialContainerScanComplete;
//@property(retain) IDESourceControlWorkspaceMonitor *sourceControlWorkspaceMonitor; // @synthesize sourceControlWorkspaceMonitor=_sourceControlWorkspaceMonitor;
//@property(retain) IDEDeviceInstallWorkspaceMonitor *deviceInstallWorkspaceMonitor; // @synthesize deviceInstallWorkspaceMonitor=_deviceInstallWorkspaceMonitor;
//@property(readonly) IDERefactoring *refactoring; // @synthesize refactoring=_refactoring;
//@property(retain) IDEIndex *index; // @synthesize index=_index;
//@property(retain, nonatomic) IDEWorkspaceArena *workspaceArena; // @synthesize workspaceArena=_workspaceArena;
//@property(readonly) DVTFilePath *wrappedXcode3ProjectPath; // @synthesize wrappedXcode3ProjectPath=_wrappedXcode3ProjectPath;
//@property(retain) IDERunContextManager *runContextManager; // @synthesize runContextManager=_runContextManager;

- (id)buildableProductsForBaseName:(id)arg1;
- (void)_handleIndexablesChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didCreateIndex:(id)arg1;
- (void)initializeIndexAndRefactoring:(id)arg1;
- (void)_scheduleWorkspaceUpgradeTasksController:(id)arg1;
- (void)_setupWorkspaceUpgradeTasksController;
- (void)_setupSourceControlWorkspaceMonitorIfNeeded;
- (void)_initializeSourceControlWorkspaceMonitor;
- (void)_setupDeviceInstallWorkspaceMonitor;
- (void)beginTextIndexing;
- (id)tearDownIndexAndRefactoring;
- (void)_restartIndexingAndRefactoring;
- (void)_scheduleIndexingAndRefactoringRestart;
- (void)_handleIndexableFilesChange:(id)arg1;
- (void)_updateIndexableFiles:(id)arg1;
- (id)_fileRefsToResolvedFilePaths;
- (void)_processIndexRegistrationBatch:(id)arg1;
- (void)_enqueueIndexRegistrationBatchNotification;
- (void)_handleIndexableSourcesChange:(id)arg1;
- (void)primitiveInvalidate;
//@property(readonly) IDEContainer<IDECustomDataStoring> *representingCustomDataStore;
//@property(readonly) IDEContainer *wrappedXcode3Project;
- (void)_updateWrappedXcode3Project;
- (void)_setWrappedXcode3Project:(id)arg1;
@property(readonly, getter=isSimpleFilesFocused) BOOL simpleFilesFocused;
- (void)_setSimpleFilesFocused:(BOOL)arg1;
- (void)_primitiveSetSimpleFilesFocused:(BOOL)arg1;
- (void)setSimpleFilesFocused:(BOOL)arg1;
@property(readonly) BOOL hostsOnlyXcode3Project;
@property(readonly) NSString *representingTitle;
@property(readonly) DVTFilePath *representingFilePath;
//@property(retain) IDEExecutionEnvironment *executionEnvironment;
- (void)_setupExecutionEnvironment;
- (float)maxSupportedArchiveVersion;
- (float)archiveVersion;
- (id)displayName;
@property(readonly) NSString *name;
//@property(readonly) IDELocalizationManager *localizationManager;
@property(retain) IDETestManager *testManager; // @dynamic testManager;
- (void)setBatchFindManager:(id)arg1;
//@property(readonly) IDEBatchFindManager *batchFindManager;
//@property(retain) IDEWorkspaceSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
//@property(retain) IDEBreakpointManager *breakpointManager; // @dynamic breakpointManager;
//@property(readonly) IDEIssueManager *issueManager; // @synthesize issueManager=_issueManager;
- (void)_setupIssueManagerIfNeeded;
//@property(readonly) IDELogManager *logManager; // @synthesize logManager=_logManager;
- (void)_setupLogManagerIfNeeded;
- (id)blueprintsContainingFilePaths:(id)arg1;
@property(readonly) NSSet *customDataStores;
@property(readonly) NSSet *referencedRunnableBuildableProducts;
@property(readonly) NSSet *referencedTestables;
@property(readonly) NSSet *referencedTestableProviders;
@property(readonly) NSSet *referencedBlueprints;
- (id)containerGraphOrderForBlueprintProviders:(id)arg1;
@property(readonly) NSSet *referencedBlueprintProviders;
@property(readonly) NSSet *referencedContainers;
- (void)_referencedContainersDidUpdate;
//- (void)invokeChangingValueForKey:(id)arg1 fromSet:(id)arg2 toSet:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_referencedTestablesOfProvider:(id)arg1 didChange:(id)arg2;
- (void)_referencedBlueprintsDidUpdateForProvider:(id)arg1;
- (id)buildableProductsForProductName:(id)arg1;
- (void)_setupContainerQueries;
- (void)_addBlueprintProviderToOrderedSet:(id)arg1;
- (id)_Problem9887530_preferredStructurePathForContainerAtPath:(id)arg1;
- (id)_Problem9887530_preferredStructurePaths;
- (id)_Problem9887530_preferredStructurePathsForContainerToContainerFileReferences:(id)arg1;
- (id)_Problem9887530_wrappedContainerFileReferences:(id)arg1 forPath:(id)arg2;
- (void)_processFileReferencesForProblem8727051;
- (void)_addFileReferenceForProblem8727051:(id)arg1;
- (void)cancelTrackedClients;
- (id)clientsNotSupportingCancellation;
- (id)clientsRequiringCancellationPrompt;
- (id)registerUncancellableClientWithName:(id)arg1;
//- (id)registerClientWithName:(id)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(CDUnknownBlockType)arg3;
//@property(readonly) IDEConcreteClientTracker *clientTracker;
//- (BOOL)_cancelOngoingBuildWithCompletionBlockIfNeeded:(CDUnknownBlockType)arg1;
//- (void)_setupBuildCompletedNotificationForExecutionEnvironment:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)setContainerFilePath:(id)arg1 error:(id *)arg2;
- (BOOL)_setContainerFilePath:(id)arg1 upgradeToWorkspace:(BOOL)arg2 error:(id *)arg3;
- (void)_changeContainerFilePath:(id)arg1 inContext:(id)arg2 upgradeToWorkspace:(BOOL)arg3;
- (void)_changeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (BOOL)_configureWrappedWorkspaceWithError:(id *)arg1;
- (id)_wrappingContainerPath;
- (void)_setWrappedXcode3ProjectPath:(id)arg1;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
- (void)_buildProductsLocationDidChange;
- (void)_containerDidLoad;
- (void)_checkIfHasFinishedLoading;
- (void)_finishLoadingAsynchronously:(BOOL)arg1 shouldUpgradeFromSimpleFilesFocused:(BOOL)arg2;
- (void)_setupWorkspaceArenaIfNeeded;
//@property(readonly) IDEActivityLogSection *integrityLog;
- (void)analyzeModelIntegrity;
- (void)_setFileRefsWithContainerLoadingIssues:(id)arg1;
- (void)_handleContainerResolutionFailureForFileReference:(id)arg1;
- (void)_clearPendingFileReferencesAndContainerLoadingTokens;
- (void)_removePendingReferencedContainerPath:(id)arg1;
- (void)_addPendingReferencedContainerPath:(id)arg1;
- (void)_removePendingReferencedFileReference:(id)arg1;
- (void)_addPendingReferencedFileReference:(id)arg1;
@property(retain) id _applicationDelegate; // @dynamic _applicationDelegate;
//@property(retain) id <IDEWorkspaceDelegate> workspaceDelegate;
- (id)_openingPerformanceMetricIdentifier;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)insertInSdefSupport_symbolicBreakpoints:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInSdefSupport_fileBreakpoints:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInSdefSupport_breakpoints:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)sdefSupport_newXcode3GroupWithProperties:(id)arg1;
- (id)sdefSupport_newXcode3FileReferenceWithProperties:(id)arg1;
- (id)sdefSupport_newSymbolicBreakpointWithProperties:(id)arg1;
- (id)sdefSupport_newRunContextWithProperties:(id)arg1;
- (id)sdefSupport_newProjectForDocument:(id)arg1 withContentsValue:(id)arg2 andProperties:(id)arg3;
- (id)sdefSupport_newItemReferenceWithProperties:(id)arg1;
- (id)sdefSupport_newGroupWithProperties:(id)arg1;
- (id)sdefSupport_newFileReferenceWithProperties:(id)arg1;
- (id)sdefSupport_newFileBreakpointWithProperties:(id)arg1;
- (id)sdefSupport_newBuildMessagesWithProperties:(id)arg1;
- (id)sdefSupport_newBreakpointWithProperties:(id)arg1;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)sdefSupport_symbolicBreakpointsForDocument:(id)arg1;
- (id)sdefSupport_fileBreakpointsForDocument:(id)arg1;
- (id)sdefSupport_breakpointsForDocument:(id)arg1;
- (void)setSdefSupport_buildFolderName:(id)arg1;
- (id)sdefSupport_buildFolderName;
- (id)ideModelObjectTypeIdentifier;
- (id)patchesDirectoryWrapper;
- (id)patchesDirectory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
