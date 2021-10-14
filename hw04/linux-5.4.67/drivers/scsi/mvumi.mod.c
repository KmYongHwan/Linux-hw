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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0x1000e51, "schedule" },
	{ 0x596660b2, "scsi_rescan_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xba312d7b, "current_task" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B4Bd00009143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009580sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2718502E33D8977A69F5594");
