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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xe1bd6c99, "rio_init_mports" },
	{ 0x3ac334d0, "rio_register_scan" },
	{ 0x1a05bc0e, "rio_pw_enable" },
	{ 0x28433c7c, "rio_local_set_device_id" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xed7a1654, "rio_set_port_lockout" },
	{ 0x122917, "rio_get_comptag" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x5f3b96fc, "rio_route_add_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8ec13007, "rio_mport_chk_dev_access" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa47e86ef, "rio_unlock_device" },
	{ 0x4e5fbffb, "rio_route_get_entry" },
	{ 0xd07ba884, "rio_lock_device" },
	{ 0x4ea4afcf, "rio_enable_rx_tx_port" },
	{ 0xa77b0c68, "rio_dev_get" },
	{ 0x5d446a0a, "rio_add_device" },
	{ 0xaf78ec83, "rio_attach_device" },
	{ 0x4e1ed05d, "rio_mport_get_feature" },
	{ 0xed1238ea, "rio_mport_get_physefb" },
	{ 0x7cff3f78, "rio_route_clr_table" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcc674e8f, "rio_add_net" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xdff288df, "rio_free_net" },
	{ 0xfb833ac6, "rio_alloc_net" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc92dedc0, "rio_mport_write_config_32" },
	{ 0xc5850110, "printk" },
	{ 0xeadadc80, "__rio_local_write_config_32" },
	{ 0xeeca87bd, "rio_mport_read_config_32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfee402dd, "__rio_local_read_config_32" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5BE704947BB54CA932BD471");
