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
	{ 0x984c5e73, "p9_fcall_fini" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc4b49901, "p9_client_cb" },
	{ 0x3b567ab7, "v9fs_unregister_trans" },
	{ 0x184fa7fd, "ib_dealloc_pd_user" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x44e9a829, "match_token" },
	{ 0x284b2c82, "v9fs_register_trans" },
	{ 0x88780b1a, "__rdma_create_id" },
	{ 0x77aef3a0, "rdma_destroy_id" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb79f25fd, "p9_parse_header" },
	{ 0x658c5bc5, "rdma_connect" },
	{ 0xcaf5712c, "p9_tag_lookup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6748542a, "ib_destroy_qp_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x4e3567f7, "match_int" },
	{ 0xbb4046e8, "__ib_alloc_cq_any" },
	{ 0x3785c132, "init_net" },
	{ 0x831123f4, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe3c8e6b3, "rdma_bind_addr" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xbe7f3a71, "rdma_resolve_route" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe48cb91d, "rdma_disconnect" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0xebbe8fdf, "rdma_resolve_addr" },
	{ 0x1ec75b33, "__ib_alloc_pd" },
	{ 0x29361773, "complete" },
	{ 0x6c36e95b, "p9_req_put" },
	{ 0xa637b975, "dma_ops" },
	{ 0xadba320, "ib_free_cq_user" },
};

MODULE_INFO(depends, "9pnet,ib_core,rdma_cm");


MODULE_INFO(srcversion, "9065E052E74D5033B192DB3");
