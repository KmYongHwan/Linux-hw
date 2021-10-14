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
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x40f75301, "unregister_ip_vs_scheduler" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x116896c5, "register_ip_vs_scheduler" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7ab6cd97, "ip_vs_scheduler_err" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3785c132, "init_net" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "23DB53AD2932DEE2CF204B5");
