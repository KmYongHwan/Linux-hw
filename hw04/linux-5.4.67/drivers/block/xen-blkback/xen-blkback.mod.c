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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x95dc3deb, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x334b33a, "fs_bio_set" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d269b6f, "unregister_xenbus_watch" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0x7ce210e0, "xenbus_map_ring_valloc" },
	{ 0x8eae1ee5, "gnttab_map_refs" },
	{ 0x349cba85, "strchr" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xf9148bff, "xenbus_dev_error" },
	{ 0xabfae44a, "xenbus_dev_is_online" },
	{ 0xd09fa79e, "gnttab_alloc_pages" },
	{ 0x4890e5d, "gnttab_unmap_refs" },
	{ 0x4b931968, "xen_features" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf6118478, "filemap_write_and_wait" },
	{ 0x64c26f41, "gnttab_unmap_refs_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe2a32370, "invalidate_inode_pages2" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x9836fa64, "gnttab_unmap_refs_async" },
	{ 0xffe0104d, "xenbus_unmap_ring_vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4ef87658, "gnttab_free_pages" },
	{ 0xba312d7b, "current_task" },
	{ 0x4159c7f8, "__xenbus_register_backend" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf75a745e, "bio_add_page" },
	{ 0x87356c1, "xenbus_watch_pathfmt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xe151b6ee, "blkdev_get_by_dev" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x739758b1, "bio_put" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xc2c5802, "work_busy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0458ccb, "xenbus_strstate" },
	{ 0xf720a60b, "module_put" },
	{ 0x479f68ad, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x9f984513, "strrchr" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x1bd3c261, "blkdev_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b04668e, "bind_interdomain_evtchn_to_irqhandler" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x9415ca79, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x585997f1, "xenbus_switch_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x15b225b8, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x68609863, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DD6617458D34E4CE76976B6");
