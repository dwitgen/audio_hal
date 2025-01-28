
import os
import shutil

def before_build():
    # Define source and target paths
    source_path = "/config/.esphome/external_components/dae18032/"
    target_path = "/config/.esphome/build/homeassist03components/audio_hal"  # Replace with the correct path in your system

    # Check if the target directory exists, create if it doesn't
    if not os.path.exists(target_path):
        os.makedirs(target_path)

    # Copy all files and subdirectories recursively
    for root, dirs, files in os.walk(source_path):
        # Determine the relative path to recreate the directory structure
        relative_path = os.path.relpath(root, source_path)
        target_dir = os.path.join(target_path, relative_path)

        # Ensure target subdirectory exists
        if not os.path.exists(target_dir):
            os.makedirs(target_dir)

        # Copy each file to the corresponding target directory
        for file_name in files:
            full_file_name = os.path.join(root, file_name)
            if os.path.isfile(full_file_name):
                shutil.copy(full_file_name, target_dir)
                print(f"Copied {full_file_name} to {target_dir}")
