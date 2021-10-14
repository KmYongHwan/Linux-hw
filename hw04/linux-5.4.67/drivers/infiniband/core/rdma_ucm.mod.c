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
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5c3ef8f8, "rdma_get_service_id" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xe4f5a219, "stream_open" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xd0e67bd1, "rdma_join_multicast" },
	{ 0x63057f4b, "ib_copy_path_rec_to_user" },
	{ 0x3e97f446, "rdma_read_gids" },
	{ 0x88780b1a, "__rdma_create_id" },
	{ 0x77aef3a0, "rdma_destroy_id" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb48ab77c, "ib_copy_ah_attr_to_user" },
	{ 0x5fcb0e66, "rdma_init_qp_attr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0x658c5bc5, "rdma_connect" },
	{ 0x5ac6446d, "rdma_set_reuseaddr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd11ad592, "rdma_set_ib_path" },
	{ 0xb36e4148, "ib_sa_pack_path" },
	{ 0x47fda759, "misc_register" },
	{ 0xbb78f355, "__rdma_accept" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xec93659d, "rdma_listen" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xecd5c708, "ib_copy_qp_attr_to_user" },
	{ 0xe9df6a1d, "rdma_set_afonly" },
	{ 0xe60e41a9, "rdma_notify" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x3785c132, "init_net" },
	{ 0xa0fd0123, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x24e4f228, "__task_pid_nr_ns" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xad950225, "ib_register_client" },
	{ 0xe3c8e6b3, "rdma_bind_addr" },
	{ 0xbe7f3a71, "rdma_resolve_route" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd6636ca6, "rdma_addr_size_in6" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe48cb91d, "rdma_disconnect" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb8dccbbe, "rdma_reject" },
	{ 0x86cef180, "rdma_addr_size" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb52ea549, "rdma_set_service_type" },
	{ 0x87436cc9, "rdma_set_ack_timeout" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0xebbe8fdf, "rdma_resolve_addr" },
	{ 0x305e5701, "rdma_addr_size_kss" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xe5a78c1e, "ib_sa_unpack_path" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x343f1816, "misc_deregister" },
	{ 0xa292830b, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x61dd7a10, "rdma_leave_multicast" },
};

MODULE_INFO(depends, "rdma_cm,ib_uverbs,ib_core");


MODULE_INFO(srcversion, "3A77E60953C2A891531818E");
