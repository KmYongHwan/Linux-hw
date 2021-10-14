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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x70691c99, "single_open" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xa071f2c6, "single_release" },
	{ 0x397ea3f0, "visorbus_write_channel" },
	{ 0xc4142837, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4de03230, "visorchannel_signalinsert" },
	{ 0x56401853, "visorchannel_signalremove" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3ffa93ff, "visorbus_read_channel" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb5dbc84b, "visorbus_register_visor_driver" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61def273, "visorbus_unregister_visor_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x20978fb9, "idr_find" },
};

MODULE_INFO(depends, "visorbus");


MODULE_INFO(srcversion, "9C387C11B1CB68C1A858872");
