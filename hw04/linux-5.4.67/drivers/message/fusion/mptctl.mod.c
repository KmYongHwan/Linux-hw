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
	{ 0xc373a5d1, "no_llseek" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0xc8e2a60e, "mpt_event_register" },
	{ 0x91fff5bf, "mpt_reset_register" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x3052f851, "mpt_register" },
	{ 0x47fda759, "misc_register" },
	{ 0x4bb99c7f, "mpt_device_driver_register" },
	{ 0x23b06446, "mpt_HardResetHandler" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9166fada, "strncpy" },
	{ 0xaf212779, "mpt_alloc_fw_memory" },
	{ 0x55e3639e, "mpt_free_fw_memory" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x57e373b2, "mpt_verify_adapter" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x754d539c, "strlen" },
	{ 0x4893214e, "mpt_put_msg_frame" },
	{ 0x7b54272a, "mpt_GetIocState" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x9a6e4d0a, "mpt_config" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x92a78c5a, "mpt_halt_firmware" },
	{ 0xa43ea241, "mpt_Soft_Hard_ResetHandler" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x102ffa7f, "mpt_put_msg_frame_hi_pri" },
	{ 0xbf855d72, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1deaa209, "mpt_send_handshake_request" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x13383b3b, "mpt_get_msg_frame" },
	{ 0x5d6b44a4, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2864d614, "fasync_helper" },
	{ 0xdd805159, "ioc_list" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x29361773, "complete" },
	{ 0x4a79afb9, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0xc5850110, "printk" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "FD0EDD7A1D4E32B40E16283");
