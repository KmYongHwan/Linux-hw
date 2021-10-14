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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x31a146a6, "mptscsih_host_attrs" },
	{ 0x7096e223, "fc_eh_timed_out" },
	{ 0x1228a4ea, "mptscsih_show_info" },
	{ 0xa531966, "mptscsih_bios_param" },
	{ 0x8dca7fb, "mptscsih_change_queue_depth" },
	{ 0xc559ea97, "mptscsih_slave_destroy" },
	{ 0x84e588a0, "mptscsih_slave_configure" },
	{ 0xb8960e6d, "mptscsih_host_reset" },
	{ 0x4f229de4, "mptscsih_info" },
	{ 0x20f9fe23, "mptscsih_shutdown" },
	{ 0x5aa6d310, "mptscsih_resume" },
	{ 0x1bc4004, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xf2f9d256, "fc_release_transport" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x91fff5bf, "mpt_reset_register" },
	{ 0xc8e2a60e, "mpt_event_register" },
	{ 0x13406e4c, "mptscsih_scandv_complete" },
	{ 0x823e6ccc, "mptscsih_taskmgmt_complete" },
	{ 0x3052f851, "mpt_register" },
	{ 0xc091f81e, "mptscsih_io_done" },
	{ 0xd49808d6, "fc_attach_transport" },
	{ 0xe3a53f4c, "sort" },
	{ 0xc744327f, "mptscsih_abort" },
	{ 0xfba0e6cf, "mptscsih_dev_reset" },
	{ 0x5fd34ebd, "mptscsih_bus_reset" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x1559a976, "mpt_attach" },
	{ 0x62fbc054, "mptscsih_ioc_reset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x32b586d8, "mptscsih_qcmd" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x818426f3, "mptscsih_event_process" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xfb578fc5, "memset" },
	{ 0x9a6e4d0a, "mpt_config" },
	{ 0x995483f2, "scsi_is_fc_rport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ecba507, "fc_remote_port_rolechg" },
	{ 0x3cd6bd1c, "fc_remote_port_add" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xfd88423f, "fc_remote_port_delete" },
	{ 0x25eb7a40, "mptscsih_remove" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x19911d6f, "fc_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,scsi_transport_fc,mptbase");

MODULE_ALIAS("pci:v00001000d00000621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000624sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000628sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000626sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000646sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "920CF1515116B36A2B57F88");
