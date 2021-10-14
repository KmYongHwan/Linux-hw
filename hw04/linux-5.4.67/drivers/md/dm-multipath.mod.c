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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5ab6a8cf, "scsi_dh_set_params" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0x53b954a2, "up_read" },
	{ 0xa471982d, "dm_table_set_type" },
	{ 0x754d539c, "strlen" },
	{ 0x961c6b31, "dm_get_device" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd6307aad, "dm_path_uevent" },
	{ 0x990c16b6, "dm_table_get_md" },
	{ 0x8a9df9e0, "blk_put_request" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x308834f2, "dm_register_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf2ace375, "scsi_dh_attached_handler_name" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe718bf7b, "blk_lld_busy" },
	{ 0x95c2ff07, "scsi_dh_activate" },
	{ 0xe18157fb, "dm_unregister_target" },
	{ 0xfbd49d6f, "scsi_dh_attach" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x9ebcd5af, "dm_suspended" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d715234, "bio_endio" },
	{ 0xf720a60b, "module_put" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x2ab67375, "dm_mq_kick_requeue_list" },
	{ 0x4ba20fb3, "bdevname" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3e12dee, "dm_device_name" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xacb5e2fd, "dm_put_device" },
	{ 0x96f0e7d9, "dm_per_bio_data" },
	{ 0xc716acbc, "dm_noflush_suspending" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37af3190, "dm_table_run_md_queue_async" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x61d58859, "blk_get_request" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x68609863, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "36460B43F31DC9A82115E5F");
