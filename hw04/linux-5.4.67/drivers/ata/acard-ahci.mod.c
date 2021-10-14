#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xdeaeab9e, "ahci_sdev_attrs" },
	{ 0xb8563810, "ahci_shost_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0xf163984b, "ata_scsi_change_queue_depth" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0xb7d80f3c, "ahci_ops" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0x490d375b, "ahci_fill_cmd_slot" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xc5850110, "printk" },
	{ 0xdc56281b, "pcim_pin_device" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x63559014, "ata_print_version" },
	{ 0x5f2aad1d, "ahci_host_activate" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9f127c97, "ahci_print_info" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xd45d73c4, "ata_dummy_port_ops" },
	{ 0x2055f120, "ata_port_pbar_desc" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0xc54e0acc, "ahci_set_em_messages" },
	{ 0x18e99139, "ahci_save_initial_config" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xa88406a3, "pcim_iomap_regions_request_all" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x394b39dc, "ahci_port_resume" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x4b7f1992, "ahci_init_controller" },
	{ 0x1e40cc4f, "ahci_reset_controller" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libahci");

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "15DB045D75A82379D45DAE1");
