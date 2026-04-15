#include "CriteriaButtonManager.h"
#include <string>

// Sets default values for this component's properties
UCriteriaButtonManager::UCriteriaButtonManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	FString price = FString::SanitizeFloat(RandomPrice(0.05, 10));

	criterion.Add("Fruit");
	criterion.Add("Not Fruit");
	criterion.Add("<" + price);
	criterion.Add("=" + price);
	criterion.Add(">" + price);
	criterion.Add("Not Red");
	criterion.Add("Not Yellow");
	criterion.Add("Not Green");
	criterion.Add("Not Drink");
	criterion.Add("Red");
	criterion.Add("Yellow");
	criterion.Add("Green");
	criterion.Add("Drink");
	criterion.Add("Not Single");
	criterion.Add("Single");
}

// Called when the game starts
void UCriteriaButtonManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UCriteriaButtonManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UCriteriaButtonManager::RandomPrice(float min, float max)
{
	float result;
	// TODO: Randomly generate number between min and max.
	//result = 

	return result;
}

FString UCriteriaButtonManager::SelectRandomCriteria()
{
	FString result;

	result = criterion

	return result;
}