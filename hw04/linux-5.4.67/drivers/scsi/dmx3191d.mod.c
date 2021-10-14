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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe2bca26a, "scsi_eh_prep_cmnd" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xc5850110, "printk" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x431da1a1, "scsi_eh_restore_cmnd" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v0000134Ad00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D723D98F8B80778ABCAAF38");
