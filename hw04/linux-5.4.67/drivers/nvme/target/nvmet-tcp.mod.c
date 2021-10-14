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
	{ 0x840342c6, "sgl_free" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0xcdf2263e, "kernel_sendmsg" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x50c85745, "nvmet_req_uninit" },
	{ 0x321276fe, "nvmet_ctrl_fatal_error" },
	{ 0x40aebdcf, "sock_release" },
	{ 0xa18765b4, "sock_recvmsg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0xacb25d00, "nvmet_sq_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7ea514c, "kernel_listen" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x5d3ce2e, "crypto_ahash_digest" },
	{ 0x1b280138, "nvmet_req_execute" },
	{ 0x90e7b495, "kernel_setsockopt" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x22fa6958, "inet_pton_with_scope" },
	{ 0xffb7c514, "ida_free" },
	{ 0x87e17297, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdd83759d, "nvmet_register_transport" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x73d0e3ae, "kernel_sock_shutdown" },
	{ 0xdad6a7e5, "kernel_getsockname" },
	{ 0xc8ce3710, "kernel_getpeername" },
	{ 0x3785c132, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x637b29db, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x950bd0d0, "nvmet_unregister_transport" },
	{ 0x26038c3a, "kernel_sendpage" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x649b8c7f, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe3f50c6a, "kernel_recvmsg" },
	{ 0xfd040666, "kernel_accept" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9b0855e, "sock_create" },
	{ 0xf8ac8b96, "kernel_bind" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x386a2c0a, "nvmet_req_complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9bc39af7, "crypto_alloc_ahash" },
};

MODULE_INFO(depends, "nvmet");


MODULE_INFO(srcversion, "1BCEDEE3DEAFFE63FBBB80A");
