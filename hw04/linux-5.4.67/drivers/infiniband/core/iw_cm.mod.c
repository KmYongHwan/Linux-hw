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
	{ 0x220494a7, "rdma_nl_register" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8a4a647a, "rdma_nl_unicast_wait" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc9c5d524, "ib_modify_qp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x2544432d, "ibnl_put_attr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0x3785c132, "init_net" },
	{ 0x2f2310f8, "rdma_nl_multicast" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x75a729a0, "rdma_nl_unregister" },
	{ 0x9efed499, "rdma_nl_unicast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0xb7c71f97, "ibnl_put_msg" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "0056ADC7026CF47288D28C8");
