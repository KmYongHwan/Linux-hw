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
	{ 0x7551b46e, "dm_tm_open_with_sm" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc9661a27, "submit_bio_wait" },
	{ 0x48e323be, "dm_bm_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x961c6b31, "dm_get_device" },
	{ 0x23ebd5fb, "dm_bitset_set_bit" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0x688d422d, "dm_bm_block_size" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x82f8830a, "bio_uninit" },
	{ 0x308834f2, "dm_register_target" },
	{ 0xfdf637af, "dm_table_device_name" },
	{ 0x38f5bd8d, "dm_kcopyd_copy" },
	{ 0xbb461fb7, "dm_bitset_cursor_begin" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0xd163cade, "dm_tm_commit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x63b0c22d, "dm_bitset_flush" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xeb3af455, "bio_reset" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xcedfc878, "dm_bitset_cursor_get_value" },
	{ 0x97263968, "dm_bitset_resize" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x2f40da68, "dm_bm_set_read_write" },
	{ 0xc86debf7, "bio_init" },
	{ 0xe7794cc6, "dm_set_target_max_io_len" },
	{ 0x4f477261, "dm_bm_checksum" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x72289260, "dm_block_manager_destroy" },
	{ 0x9e98460e, "dm_bitset_empty" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xe18157fb, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd6711a58, "dm_bitset_cursor_next" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x9ebcd5af, "dm_suspended" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9e798e22, "dm_bm_set_read_only" },
	{ 0x2d715234, "bio_endio" },
	{ 0x7ade1071, "dm_tm_destroy" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xc248bde2, "dm_disk_bitset_init" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x30c37cc0, "dm_bm_write_lock_zero" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x4ba20fb3, "bdevname" },
	{ 0x5cf0d0bb, "dm_tm_create_with_sm" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x7b6b3af5, "dm_bm_read_lock" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x54f69d, "dm_tm_pre_commit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5475ba9e, "dm_block_location" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x98db2687, "dm_bitset_cursor_end" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xef0c8a7f, "dm_block_manager_create" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x95a52abd, "dm_bm_is_read_only" },
	{ 0xacb5e2fd, "dm_put_device" },
	{ 0x1e3f728d, "dm_block_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x68609863, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-persistent-data");


MODULE_INFO(srcversion, "8937EAD2F2BF7650C56DBB9");
