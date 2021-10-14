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
	{ 0xbf793710, "ata_common_sdev_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0x95b41ce, "ata_sff_port_ops" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xefa59def, "sata_std_hardreset" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc56281b, "pcim_pin_device" },
	{ 0x63559014, "ata_print_version" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2055f120, "ata_port_pbar_desc" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x8cd6c9c3, "ata_qc_complete" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc482f17, "ata_port_abort" },
	{ 0xebd6b19f, "ata_port_freeze" },
	{ 0xe67629c2, "ata_ehi_push_desc" },
	{ 0xf6d01da4, "ata_ehi_clear_desc" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x50c42ad0, "ata_sff_qc_issue" },
	{ 0x9437ba93, "ata_sff_softreset" },
	{ 0x4b8e49b2, "ata_sff_error_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xffe80f53, "ata_bmdma_port_start" },
	{ 0x6897fb28, "sata_scr_valid" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa821a997, "ata_sff_tf_load" },
	{ 0x436dbeba, "ata_sff_exec_command" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00003371sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003373sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003376sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003574sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003577sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D73sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D75sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003515sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003519sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D17sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006629sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DA754E922C0645998587520");
