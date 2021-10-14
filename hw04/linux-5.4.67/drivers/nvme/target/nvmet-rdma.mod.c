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
	{ 0x2075d699, "rdma_rw_ctx_init" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0x50c85745, "nvmet_req_uninit" },
	{ 0x184fa7fd, "ib_dealloc_pd_user" },
	{ 0x321276fe, "nvmet_ctrl_fatal_error" },
	{ 0x1fb64c72, "ib_drain_qp" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x88780b1a, "__rdma_create_id" },
	{ 0xacb25d00, "nvmet_sq_init" },
	{ 0x77aef3a0, "rdma_destroy_id" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xb12993b2, "ib_create_srq" },
	{ 0x1b280138, "nvmet_req_execute" },
	{ 0xbb78f355, "__rdma_accept" },
	{ 0x6748542a, "ib_destroy_qp_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x48a371f7, "__ib_alloc_cq_user" },
	{ 0xb4f2e4c, "rdma_destroy_qp" },
	{ 0xec93659d, "rdma_listen" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x22fa6958, "inet_pton_with_scope" },
	{ 0xffb7c514, "ida_free" },
	{ 0xe9df6a1d, "rdma_set_afonly" },
	{ 0xe60e41a9, "rdma_notify" },
	{ 0xdd83759d, "nvmet_register_transport" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3785c132, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x53feb90d, "rdma_rw_ctx_wrs" },
	{ 0x8ffddc5d, "nvmet_req_free_sgl" },
	{ 0x831123f4, "rdma_create_qp" },
	{ 0x637b29db, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xad950225, "ib_register_client" },
	{ 0xe3c8e6b3, "rdma_bind_addr" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x950bd0d0, "nvmet_unregister_transport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x649b8c7f, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb20fc67c, "ib_destroy_srq_user" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe48cb91d, "rdma_disconnect" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb8dccbbe, "rdma_reject" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x20ad6e3f, "rdma_rw_ctx_post" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb92361d, "nvmet_req_alloc_sgl" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x386a2c0a, "nvmet_req_complete" },
	{ 0x1ec75b33, "__ib_alloc_pd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0xffa2de92, "rdma_rw_ctx_destroy" },
	{ 0x47235a24, "rdma_reject_msg" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xa292830b, "ib_unregister_client" },
	{ 0xa637b975, "dma_ops" },
	{ 0xadba320, "ib_free_cq_user" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "ib_core,nvmet,rdma_cm");


MODULE_INFO(srcversion, "F40FA49A8037C34945DFDC2");
