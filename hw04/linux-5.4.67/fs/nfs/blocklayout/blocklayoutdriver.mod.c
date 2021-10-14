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
	{ 0x66475b0c, "pnfs_unregister_layoutdriver" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2b75422, "pnfs_generic_pg_init_write" },
	{ 0x334b33a, "fs_bio_set" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xd2eb7c01, "rpc_unlink" },
	{ 0x273743dc, "pnfs_ld_write_done" },
	{ 0x55c3dcc1, "pnfs_error_mark_layout_for_return" },
	{ 0x41b0b9cc, "dput" },
	{ 0x5c4a2bdd, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa285ed61, "nfs4_mark_deviceid_unavailable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8d567ba1, "rpc_mkpipe_data" },
	{ 0x9978cadc, "rpc_mkpipe_dentry" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1391f5b1, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0xaee001bb, "rpc_get_sb_net" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4dd146cd, "pnfs_generic_pg_cleanup" },
	{ 0x5be87255, "pnfs_generic_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xc039cbbe, "xdr_init_decode_pages" },
	{ 0x47c49a12, "rpc_queue_upcall" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf75a745e, "bio_add_page" },
	{ 0xd73da156, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5151274a, "blkdev_get_by_path" },
	{ 0x916d80b3, "nfs_pageio_reset_write_mds" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x333b54d7, "rpc_d_lookup_sb" },
	{ 0xe151b6ee, "blkdev_get_by_dev" },
	{ 0x34fc633c, "nfs4_put_deviceid_node" },
	{ 0x739758b1, "bio_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf720a60b, "module_put" },
	{ 0x7c98e83, "rpc_pipe_generic_upcall" },
	{ 0x479f68ad, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x8f2ffd72, "rpc_destroy_pipe_data" },
	{ 0x1bd3c261, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x9a984eae, "rpc_put_sb_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1acf441d, "pnfs_generic_pg_readpages" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x52be55b3, "page_cache_next_miss" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x12e0dc62, "pnfs_generic_pg_writepages" },
	{ 0x7812c047, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd84954df, "pnfs_generic_pg_init_read" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5f734a79, "xdr_inline_decode" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x5798c8e8, "nfs_pageio_reset_read_mds" },
	{ 0xab8bb6e5, "nfs4_init_deviceid_node" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4b53102f, "pnfs_set_lo_fail" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x7b4242d7, "xdr_set_scratch_buffer" },
	{ 0xa565eb79, "pnfs_ld_read_done" },
	{ 0x3fa55769, "__put_page" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xa628339c, "pnfs_register_layoutdriver" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x68609863, "bio_associate_blkg" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "nfsv4,sunrpc,nfs");


MODULE_INFO(srcversion, "131139394D0AA9F9D6CF3C4");
