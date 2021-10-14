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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x7bcc7dd1, "seq_release_private" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x30e58949, "xt_unregister_matches" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xdf26cad3, "xt_register_matches" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x364287b0, "proc_set_user" },
	{ 0xac1637ea, "proc_create_data" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0xe914e41e, "strcpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x4198ca95, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x6168380e, "seq_putc" },
	{ 0xc4142837, "seq_printf" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0xbc3a27c2, "__seq_open_private" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "9FFFEB64ADA80356865A9C9");
