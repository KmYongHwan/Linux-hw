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
	{ 0xd825fb97, "ipmi_smi_watcher_unregister" },
	{ 0xf577da99, "ipmi_smi_watcher_register" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4788e517, "hwmon_device_register" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "F6827D2027A84561A5FF338");
