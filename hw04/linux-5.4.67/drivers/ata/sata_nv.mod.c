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
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0xbf793710, "ata_common_sdev_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0xfaddb08b, "ata_bmdma_port_ops" },
	{ 0xaa8d59f8, "ata_std_qc_defer" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x63559014, "ata_print_version" },
	{ 0xb5fc1d87, "ata_pci_sff_activate_host" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0xcf2ad2f9, "ata_pci_bmdma_prepare_host" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x87b8798d, "sg_next" },
	{ 0x690a4ed4, "ata_bmdma_qc_prep" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xffe80f53, "ata_bmdma_port_start" },
	{ 0xa410302d, "sata_link_hardreset" },
	{ 0x18807068, "ata_link_printk" },
	{ 0x20a6d428, "sata_link_resume" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xe484e35f, "ioread32" },
	{ 0x5b3629a, "ata_bmdma_post_internal_cmd" },
	{ 0x4ced4cfc, "ata_sff_tf_read" },
	{ 0xb672ebe3, "ata_bmdma_irq_clear" },
	{ 0xc482f17, "ata_port_abort" },
	{ 0xb5fdbffd, "__ata_ehi_push_desc" },
	{ 0xdd2960b8, "ata_qc_get_active" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xafdc8cfe, "blk_queue_max_segments" },
	{ 0xa7dea7af, "blk_queue_segment_boundary" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1e47fa9d, "ata_bmdma_qc_issue" },
	{ 0xddb1eed3, "ata_port_printk" },
	{ 0x90bdb5bc, "ata_bmdma_error_handler" },
	{ 0xe67629c2, "ata_ehi_push_desc" },
	{ 0x6d623d9, "ata_qc_complete_multiple" },
	{ 0x9a4b5105, "sata_scr_write" },
	{ 0x45de9517, "sata_scr_read" },
	{ 0xf6d01da4, "ata_ehi_clear_desc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xebd6b19f, "ata_port_freeze" },
	{ 0x728459ed, "ata_bmdma_port_intr" },
	{ 0x786a14ca, "ata_sff_check_status" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7769d604, "ata_bmdma_stop" },
	{ 0x74aa4167, "ata_dev_printk" },
	{ 0xf163984b, "ata_scsi_change_queue_depth" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd0000008Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000266sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000267sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "46184064D200FB05A299F6C");
