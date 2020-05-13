#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe0272bd9, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe09d7d99, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5d17af2f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x4384aea9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa8f14afc, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xaaa00383, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x266d249e, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5d081a34, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x732721b3, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xf18ed0dc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3b36e70c, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:pega_hwmon_mcu");
