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
	{ 0xe18157fb, "dm_unregister_target" },
	{ 0x308834f2, "dm_register_target" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2d715234, "bio_endio" },
	{ 0x8062d817, "iov_iter_revert" },
	{ 0x2c4b325a, "_copy_from_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfbd3f5df, "dax_copy_from_iter" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x754d539c, "strlen" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x479f68ad, "submit_bio" },
	{ 0xf75a745e, "bio_add_page" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xba312d7b, "current_task" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x68609863, "bio_associate_blkg" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0x334b33a, "fs_bio_set" },
	{ 0x29361773, "complete" },
	{ 0xc5850110, "printk" },
	{ 0x739758b1, "bio_put" },
	{ 0xc42f4c07, "bio_free_pages" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xacb5e2fd, "dm_put_device" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x961c6b31, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x96f0e7d9, "dm_per_bio_data" },
	{ 0x96848186, "scnprintf" },
	{ 0x3efd1889, "dax_direct_access" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36c172b1, "dax_copy_to_iter" },
	{ 0x6db88c39, "bdev_dax_pgoff" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EF3676FA3A5A2DDC0EEAB76");
