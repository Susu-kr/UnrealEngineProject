#include "CSpawnActor.h"
#include "Global.h"
#include "Components/StaticMeshComponent.h"

ACSpawnActor::ACSpawnActor()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;

	//ConstructorHelpers::FObjectFinder<UStaticMesh>
	//	mesh(L"Static'/Game/Meshes/Mesh_Cube.Mesh_Cube'");
	//if (mesh.Succeeded())
	//{
	//	Mesh->SetStaticMesh(mesh.Object);
	//}
	UStaticMesh* mesh;
	CHelpers::GetAsset<UStaticMesh>(&mesh, "Static'/Game/Meshes/Mesh_Cube.Mesh_Cube'");
	Mesh->SetStaticMesh(mesh);
}

void ACSpawnActor::BeginPlay()
{
	Super::BeginPlay();
	
}
