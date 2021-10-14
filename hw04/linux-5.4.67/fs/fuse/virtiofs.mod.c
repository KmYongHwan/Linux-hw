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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xfe18beab, "fuse_free_conn" },
	{ 0x85fcbe3d, "fuse_fill_super_common" },
	{ 0x7f553143, "fuse_request_end" },
	{ 0x351084, "fuse_get_unique" },
	{ 0x724a073e, "deactivate_locked_super" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xd63586da, "fuse_conn_put" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x406b5921, "virtqueue_kick_prepare" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x65833b18, "fuse_conn_init" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe9f14282, "virtqueue_get_buf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6a44a669, "fuse_send_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x1f26612e, "virtqueue_add_sgs" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5af926e0, "virtqueue_disable_cb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4d58add3, "fuse_dev_install" },
	{ 0x7ef05f94, "fuse_dev_free" },
	{ 0x14dd0000, "fuse_dev_alloc" },
	{ 0xcbd1c59, "virtqueue_notify" },
	{ 0xb6b85317, "fuse_dequeue_forget" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5dee39cb, "fuse_kill_sb_anon" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3fadea45, "unregister_virtio_driver" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x59b4cd69, "fuse_conn_get" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x43692233, "sget_fc" },
	{ 0xd07f543, "get_anon_bdev" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x294d217a, "virtqueue_is_broken" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x99c91e4d, "virtqueue_enable_cb" },
	{ 0xdd626ee3, "fuse_len_args" },
	{ 0xd66cd0b1, "register_virtio_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d0000001Av*");

MODULE_INFO(srcversion, "D96FCCCA9FA5BE8A864A157");
