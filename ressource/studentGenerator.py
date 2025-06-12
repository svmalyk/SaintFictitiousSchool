import json
import random
from faker import Faker

# Initialiser Faker pour générer des données aléatoires
fake = Faker()

# Générer une liste de 250 élèves
eleves = []
for i in range(1, 251):
    eleve = {
        "numero_dordre": i,
        "prenom": fake.first_name(),
        "nom": fake.last_name(),
        "date_de_naissance": fake.date_of_birth(minimum_age=5, maximum_age=10).strftime("%d/%m/%Y"),
        "classe": random.choice(["CP", "CE1", "CE2", "CM1", "CM2"]),
        "date_dinscription": fake.date_this_decade().strftime("%d/%m/%Y"),
        "nom_du_tuteur": fake.name(),
        "telephone": fake.phone_number(),
        "adresse": fake.address().replace("\n", ", "),
        "observations": fake.sentence(nb_words=6)
    }
    eleves.append(eleve)

# Sauvegarder la liste des élèves dans un fichier JSON
file_path = "registre_eleves_250.json"
with open(file_path, "w", encoding="utf-8") as f:
    json.dump(eleves, f, ensure_ascii=False, indent=4)

print(f"Fichier JSON des élèves généré avec succès! Le fichier est enregistré sous: {file_path}")
