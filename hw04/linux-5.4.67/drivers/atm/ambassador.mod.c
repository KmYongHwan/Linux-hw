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
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x84972054, "param_ops_byte" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x16ce10d6, "atm_dev_deregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xa9e31e3e, "atm_dev_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x69acdf38, "memcpy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xba312d7b, "current_task" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1000e51, "schedule" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb870db52, "atm_charge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v000010B6d00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B6d00001002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F3C1F132B1C35892E54F503");
