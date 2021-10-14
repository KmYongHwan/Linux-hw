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
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x1295e8d6, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc29215c9, "xt_register_target" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xac1637ea, "proc_create_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe85e7763, "nf_ct_netns_get" },
	{ 0x4167f609, "seq_release" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xa615716f, "nf_ct_netns_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x8c45fe25, "nf_register_net_hook" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x79ff3bbe, "seq_open" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbf331bdc, "nf_unregister_net_hook" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x844f9322, "proc_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0x6168380e, "seq_putc" },
	{ 0xc4142837, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a42bc96, "dev_get_by_name" },
	{ 0xa8a40b25, "dev_mc_add" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xa5c8e942, "dev_mc_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "CE25B1F6189CD89DA7E9946");
