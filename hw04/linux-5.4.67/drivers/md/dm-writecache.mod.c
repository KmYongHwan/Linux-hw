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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xe18157fb, "dm_unregister_target" },
	{ 0x308834f2, "dm_register_target" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x479f68ad, "submit_bio" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0xf75a745e, "bio_add_page" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x739758b1, "bio_put" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xda4bed31, "dm_accept_partial_bio" },
	{ 0xece784c2, "rb_first" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0x68609863, "bio_associate_blkg" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2d715234, "bio_endio" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9ebcd5af, "dm_suspended" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x56530b5c, "vmap" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3efd1889, "dax_direct_access" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x64925270, "__dax_synchronous" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x961c6b31, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x3b49011f, "bioset_init" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x38f5bd8d, "dm_kcopyd_copy" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xca9360b5, "rb_next" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0xacb5e2fd, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x73ca4d6, "bioset_exit" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x833c3313, "__memcpy_mcsafe" },
	{ 0x9d8f6105, "bio_advance" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0x99c011d8, "mcsafe_key" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc5850110, "printk" },
	{ 0x29361773, "complete" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x28451552, "dm_io" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CADF82BEC2ADC358EC4A246");
