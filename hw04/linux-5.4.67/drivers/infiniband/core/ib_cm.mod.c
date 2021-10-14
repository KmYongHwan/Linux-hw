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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x575636cd, "ib_create_ah_from_wc" },
	{ 0x5319f0a6, "ib_modify_mad" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xce13e75f, "ib_register_mad_agent" },
	{ 0xca9beaa4, "__xa_store" },
	{ 0xbbd6c1d4, "ib_free_recv_mad" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf36d0f1, "rdma_find_gid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9522edbe, "rdma_move_ah_attr" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfda9a24f, "ib_free_send_mad" },
	{ 0x82a0eab2, "rdma_destroy_ah_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x548bc933, "class_unregister" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0xdb7aa4f5, "rdma_put_gid_attr" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xec187947, "ib_get_cached_pkey" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0xc6bcbebb, "ib_set_client_data" },
	{ 0xed7adcd, "rdma_destroy_ah_attr" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xca1c07c5, "ib_create_send_mad" },
	{ 0xd1295c75, "ib_post_send_mad" },
	{ 0xe9f2b767, "ib_unregister_mad_agent" },
	{ 0xad950225, "ib_register_client" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x54be4748, "ib_find_cached_pkey" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x686d9036, "ib_init_ah_attr_from_wc" },
	{ 0x7dba6c73, "rdma_create_ah" },
	{ 0x95f743e6, "ib_cancel_mad" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8f08e886, "ib_modify_port" },
	{ 0x48b15fea, "rdma_query_gid" },
	{ 0x37a0cba, "kfree" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x9a63551e, "ib_port_register_module_stat" },
	{ 0x81646305, "ib_port_unregister_module_stat" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4920cdd, "ib_init_ah_attr_from_path" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa292830b, "ib_unregister_client" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "7CFEFF7F9D35432DACB5AFA");
