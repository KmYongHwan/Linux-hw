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
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xa81dc231, "kmem_cache_alloc_node" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x596078d9, "blk_mq_run_hw_queues" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xa19e7e4c, "blkcg_policy_register" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6f27de34, "elv_rb_latter_request" },
	{ 0x178e13a8, "blkg_conf_prep" },
	{ 0x859917e6, "blkg_print_stat_ios" },
	{ 0xbe2f4ef5, "elv_rqhash_del" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0x6960d126, "elv_rb_del" },
	{ 0x9eb43ef8, "elv_rb_find" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x4fbb4039, "blk_mq_sched_try_insert_merge" },
	{ 0xac20aca, "elevator_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbf00550, "elv_unregister" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x96b2d647, "blkg_conf_finish" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0xfacc2b32, "blk_mq_sched_request_inserted" },
	{ 0x8b83440e, "elv_rqhash_add" },
	{ 0x96908ee9, "blkcg_root" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x31f1dd4c, "of_css" },
	{ 0xdd2ed42a, "ioc_lookup_icq" },
	{ 0x700d56db, "elv_register" },
	{ 0xf9a1b94f, "blkg_print_stat_bytes" },
	{ 0x978df272, "kthread_blkcg" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0xe1ead75a, "blk_mq_free_request" },
	{ 0x2bd5fa27, "elv_bio_merge_ok" },
	{ 0xa40f3de1, "__trace_note_message" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x94c0bd68, "blkg_lookup_slowpath" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2500b931, "blkg_print_stat_bytes_recursive" },
	{ 0x7de6cc23, "io_cgrp_subsys_on_dfl_key" },
	{ 0x60cfdc38, "blkcg_policy_unregister" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x21cb33c3, "blkg_print_stat_ios_recursive" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a187f6c, "blkcg_deactivate_policy" },
	{ 0x5b5ee910, "__blkg_prfill_u64" },
	{ 0xda5ffb2c, "blkcg_print_blkgs" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x7b4c9ba9, "sbitmap_queue_min_shallow_depth" },
	{ 0x96638165, "kernfs_path_from_node" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5585e8f5, "elv_rb_former_request" },
	{ 0xca9360b5, "rb_next" },
	{ 0x9edbedd0, "wbt_disable_default" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0x4de7ee28, "blk_mq_sched_try_merge" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x750d76b4, "blkcg_activate_policy" },
	{ 0xd9a89cf9, "elv_rb_add" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "35C4404CC381A46CF2C50AE");
